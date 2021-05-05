import { fileURLToPath } from 'url';
import { createRequire } from 'module';

const rawRequire = createRequire(fileURLToPath(import.meta.url));

export async function requireFixture(specifier) {
  return { default: rawRequire(specifier ) };
}

export function importFixture(specifier) {
  return import(specifier);
}
