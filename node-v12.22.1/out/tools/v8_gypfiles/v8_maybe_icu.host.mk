# This file is generated by gyp; do not edit.

TOOLSET := host
TARGET := v8_maybe_icu
### Rules for final target.
$(obj).host/tools/v8_gypfiles/v8_maybe_icu.stamp: TOOLSET := $(TOOLSET)
$(obj).host/tools/v8_gypfiles/v8_maybe_icu.stamp: $(obj).host/tools/icu/icui18n.stamp $(obj).host/tools/icu/icuuc.stamp FORCE_DO_CMD
	$(call do_cmd,touch)

all_deps += $(obj).host/tools/v8_gypfiles/v8_maybe_icu.stamp
# Add target alias
.PHONY: v8_maybe_icu
v8_maybe_icu: $(obj).host/tools/v8_gypfiles/v8_maybe_icu.stamp

# Add target alias to "all" target.
.PHONY: all
all: v8_maybe_icu
