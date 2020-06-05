#ifndef LIBRETRO_CORE_OPTIONS_INTL_H__
#define LIBRETRO_CORE_OPTIONS_INTL_H__

#if defined(_MSC_VER) && (_MSC_VER >= 1500 && _MSC_VER < 1900)
/* https://support.microsoft.com/en-us/kb/980263 */
#pragma execution_character_set("utf-8")
#pragma warning(disable:4566)
#endif

#include <libretro.h>

/*
 ********************************
 * VERSION: 1.3
 ********************************
 *
 * - 1.3: Move translations to libretro_core_options_intl.h
 *        - libretro_core_options_intl.h includes BOM and utf-8
 *          fix for MSVC 2010-2013
 *        - Added HAVE_NO_LANGEXTRA flag to disable translations
 *          on platforms/compilers without BOM support
 * - 1.2: Use core options v1 interface when
 *        RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION is >= 1
 *        (previously required RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION == 1)
 * - 1.1: Support generation of core options v0 retro_core_option_value
 *        arrays containing options with a single value
 * - 1.0: First commit
*/

#ifdef __cplusplus
extern "C" {
#endif

/*
 ********************************
 * Core Option Definitions
 ********************************
*/

/* RETRO_LANGUAGE_JAPANESE */

/* RETRO_LANGUAGE_FRENCH */

/* RETRO_LANGUAGE_SPANISH */

/* RETRO_LANGUAGE_GERMAN */

/* RETRO_LANGUAGE_ITALIAN */

/* RETRO_LANGUAGE_DUTCH */

/* RETRO_LANGUAGE_PORTUGUESE_BRAZIL */

/* RETRO_LANGUAGE_PORTUGUESE_PORTUGAL */

/* RETRO_LANGUAGE_RUSSIAN */

/* RETRO_LANGUAGE_KOREAN */

/* RETRO_LANGUAGE_CHINESE_TRADITIONAL */

/* RETRO_LANGUAGE_CHINESE_SIMPLIFIED */
struct retro_core_option_definition option_defs_chs[] = {
   {
      "nestopia_blargg_ntsc_filter",
      "Blargg NTSC滤镜",
      "启用Blargg NTSC滤镜。",
      {
         { "disabled",   NULL },
         { "composite",  "复合视频" },
         { "svideo",     "S-Video" },
         { "rgb",        "RGB SCART" },
         { "monochrome", "黑白" },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_palette",
      "调色板",
      "选择要使用的调色板。",
      {
         { "cxa2025as",            "CXA2025AS" },
         { "consumer",             "Consumer" },
         { "canonical",            "Canonical" },
         { "alternative",          "Alternative" },
         { "rgb",                  "RGB" },
         { "pal",                  "PAL" },
         { "composite-direct-fbx", "Composite Direct FBx" },
         { "pvm-style-d93-fbx",    "PVM-style D93 FBx" },
         { "ntsc-hardware-fbx",    "NTSC hardware FBx" },
         { "nes-classic-fbx-fs",   "NES Classic FBx FS" },
         { "raw",                  "Raw" },
         { "custom",               "Custom" },
         { NULL, NULL },
      },
      "cxa2025as" /* TODO/FIXME - is this correct ? */
   },
   {
      "nestopia_nospritelimit",
      "移除角色限制",
      "移除每扫描线8个角色的硬件限制。",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_overclock",
      "CPU速度（超频）",
      "对模拟的CPU进行超频。",
      {
         { "1x", NULL },
         { "2x", NULL },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "nestopia_select_adapter",
      "4打适配器",
      "手动选择4打适配器。\n"
	  "有些游戏无法通过NstDatabase.xml数据库正确识别适配器，此项可以帮助解决此问题。",
      {
         { "auto",    "自动" },
         { "ntsc",    "NTSC" },
         { "famicom", "Famicom" },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_fds_auto_insert",
      "磁盘自动插入",
      "复位时自动插入第一张磁盘。",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_v",
      "剪切过扫描（垂直）",
      "剪切垂直方向的应该被标准电视的边框隐藏的过扫描区域。",
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_h",
      "剪切过扫描（水平）",
      "剪切水平方向的应该被标准电视的边框隐藏的过扫描区域。",
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_aspect",
      "输出宽高比",
      "选择输出宽高比。RetroArch的宽高比必须设为'内核提供'。\n"
	  "'自动'会使用NstDatabase.xml数据库文件自动检测宽高比。\n"
	  "如果没有数据库文件，'自动'缺省为NTSC。",
      {
         { "auto", "自动" },
         { "ntsc", "NTSC" },
         { "pal",  "PAL" },
         { "4:3",  "4:3" },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_genie_distortion",
      "金手指卡声音变形",
      "金手指设备会不经意的导致声音变形。\n"
	  "启用此项可以模拟这种变形，添加到游戏声音中去。",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_favored_system",
      "系统区域",
      "选择系统区域。\n"
	  "'自动'会使用NstDatabase.xml数据库自动检测区域。\n"
	  "如果没有数据库文件，'自动'缺省为NTSC。",
      {
         { "auto",    "自动" },
         { "ntsc",    "NTSC" },
         { "pal",     "PAL" },
         { "famicom", "Famicom" },
         { "dendy",   "Dendy" },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_ram_power_state",
      "内存启动状态",
      "",
      {
         { "0x00",   NULL },
         { "0xFF",   NULL },
         { "random", "随机" },
         { NULL, NULL },
      },
      "0x00"
   },
   {
      "nestopia_button_shift",
      "顺时针移动按键",
      "顺时针旋转A/B/X/Y按键。", /* is this right? @gadsby */
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_turbo_pulse",
      "连发键速度",
      "设置连发键A和B的连发速度。",
      {
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "2"
   },
   { NULL, NULL, NULL, {{0}}, NULL },
};

/* RETRO_LANGUAGE_ESPERANTO */

/* RETRO_LANGUAGE_POLISH */

/* RETRO_LANGUAGE_VIETNAMESE */

/* RETRO_LANGUAGE_ARABIC */

/* RETRO_LANGUAGE_GREEK */

/* RETRO_LANGUAGE_TURKISH */

struct retro_core_option_definition option_defs_tr[] = {
   {
      "nestopia_blargg_ntsc_filter",
      "Blargg NTSC Filtresi",
      "Blargg NTSC filtrelerini etkinleştirin.",
      {
         { "disabled",   "Devre Dışı" },
         { "composite",  "Kompozit Video"  },
         { "svideo",     "S-Video" },
         { "rgb",        "RGB SCART" },
         { "monochrome", "Tek renkli" },
         { NULL, NULL },
      },
      NULL
   },
   {
      "nestopia_palette",
      "Palet",
      "Hangi renk paletinin kullanılacağını seçin.",
      {
         { "cxa2025as",            "CXA2025AS" },
         { "consumer",             "Consumer" },
         { "canonical",            "Standart" },
         { "alternative",          "Alternatif" },
         { "rgb",                  "RGB" },
         { "pal",                  "PAL" },
         { "composite-direct-fbx", "Doğrudan Kompozit FBx" },
         { "pvm-style-d93-fbx",    "PVM-style D93 FBx" },
         { "ntsc-hardware-fbx",    "NTSC donanım FBx" },
         { "nes-classic-fbx-fs",   "NES Klasik FBx FS" },
         { "raw",                  "Raw" },
         { "custom",               "Özel" },
         { NULL, NULL },
      },
      NULL
   },
   {
      "nestopia_nospritelimit",
      "Sprite Limitini Kaldır",
      "Tarama başına 8 sprite donanım sınırını kaldır.",
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "nestopia_overclock",
      "CPU Hızı (Hız aşırtma)",
      "Öykünülmüş CPU'ya hız aşırtma uygula.",
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "nestopia_select_adapter",
      "4 Oyuncu Adaptörü",
      "Gerekirse manuel olarak bir 4 Oyuncu Adaptörü seçin. Bazı oyunlar bağdaştırıcıyı NstDatabase.xml veritabanıyla doğru bir şekilde tanıyamayabilir, bu seçenek bunu düzeltmeye yardımcı olur.",
      {
         { "auto",    "Otomatik" },
         { "ntsc",    "NTSC" },
         { "famicom", "Famicom" },
         { NULL, NULL },
      },
      NULL
   },
   {
      "nestopia_fds_auto_insert",
      "FDS Otomatik Ekleme",
      "Yeniden başlatmada ilk FDS diskini otomatik olarak yerleştirir.",
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "nestopia_overscan_v",
      "Aşırı Taşmayı Maskele (Dikey)",
      "Standart tanımlı bir televizyon ekranının kenarı çevresinde çerçeve tarafından gizlenmiş olabilecek potansiyel olarak rastgele aksaklık video çıkışını maskeleyin (dikey olarak).",
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "nestopia_overscan_h",
      "Aşırı Taşmayı Maskele (Yatay)",
      "Standart tanımlı bir televizyon ekranının kenarı çevresinde çerçeve tarafından gizlenmiş olabilecek rastgele aksaklıklı video çıkışını maskeleyin (yatay olarak).",
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "nestopia_aspect",
      "Tercih Edilen En Boy Oranı",
      "Tercih edilen en boy oranını seçin. RetroArch'ın en boy oranı, Video ayarlarında 'Çekirdek Tarafından Sağlanan'  olarak ayarlanmalıdır. 'Otomatik', en-boy oranı otomatik belirlemesi için NstDatabase.xml veritabanını kullanır. Eğer mevcut bir veritabanı yoksa, 'Otomatik' için NTSC'ye varsayılan olacaktır.",
      {
         { "auto", "Otomatik" },
         { "ntsc", "NTSC" },
         { "pal",  "PAL" },
         { "4:3",  "4:3" },
         { NULL, NULL },
      },
      NULL
   },
   {
      "nestopia_genie_distortion",
      "Game Genie Ses Bozulma",
      "Game Genie hile cihazı yanlışlıkla oyunlarda ses bozulmalarına neden olabilir. Bunu etkinleştirerek, oyun sesine ekleyeceği bozulmayı taklit edebilirsiniz.",
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "nestopia_favored_system",
      "Sistem Bölgesi",
      "Sistemin hangi bölgeden olacağını seçin. 'Otomatik' bölgenin otomatik belirlenmesi için NstDatabase.xml veritabanı dosyasını kullanır. Eğer mevcut bir veritabanı yoksa, 'Otomatik' için NTSC'ye varsayılan olacaktır.",
      {
         { "auto",    "Otomatik" },
         { "ntsc",    "NTSC" },
         { "pal",     "PAL" },
         { "famicom", "Famicom" },
         { "dendy",   "Dendy" },
         { NULL, NULL },
      },
      NULL
   },
   {
      "nestopia_ram_power_state",
      "Açılıştaki RAM Durumu",
      "",
      {
         { "0x00",   NULL },
         { "0xFF",   NULL },
         { "random", "Rastgele" },
         { NULL, NULL },
      },
      NULL
   },
   {
      "nestopia_button_shift",
      "A/B/X/Y Saat Yönünde Kaydırma",
      "A/B/X/Y tuşlarını saat yönünde çevirir.", /* Açıklama daha sonra eklenecek */
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "nestopia_turbo_pulse",
      "Turbo Pulse Speed",
      "Turbo B ve Turbo A düğmeleri için turbo hızını ayarlayın.",
      {
         { NULL, NULL },
      },
      NULL
   },
   { NULL, NULL, NULL, {{0}}, NULL },
};

#ifdef __cplusplus
}
#endif

#endif
