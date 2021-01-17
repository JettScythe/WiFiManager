/**
 * strings_en.h
 * engligh strings for
 * WiFiManager, a library for the ESP8266/Arduino platform
 * for configuration of WiFi credentials using a Captive Portal
 * 
 * @author Creator tzapu
 * @author tablatronix
 * @version 0.0.0
 * @license MIT
 */

#ifndef _WM_STRINGS_H_
#define _WM_STRINGS_H_

#ifndef WIFI_MANAGER_OVERRIDE_STRINGS
// !!! THIS DOES NOT WORK, you cannot define in a sketch, if anyone one knows how to order includes to be able to do this help!

const char HTTP_HEAD_START[]       PROGMEM = "<!DOCTYPE html><html lang='en'><head><meta name='format-detection' content='telephone=no'><meta charset='UTF-8'><meta  name='viewport' content='width=device-width,initial-scale=1,user-scalable=no'/><title>{v}</title>";
const char HTTP_SCRIPT[]           PROGMEM = "<script>function c(l){"
"document.getElementById('s').value=l.innerText||l.textContent;"
"p = l.nextElementSibling.classList.contains('l');"
"document.getElementById('p').disabled = !p;"
"if(p)document.getElementById('p').focus();}</script>";

const char HTTP_HEAD_END[]         PROGMEM = "</head><body class='{c}'><div class='wrap'>";
// example of embedded logo, base64 encoded inline, No styling here
const char HTTP_ROOT_MAIN[]        PROGMEM = "<img title=' alt=' src='data:image/png;base64,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'/><p>In order for your toy to get online, we need to give it access to your WiFi connection. Please enter those details here</p>";

const char * const HTTP_PORTAL_MENU[] PROGMEM = {
"<form action='/wifi'    method='get'><button>Configure WiFi</button></form><br/>\n", // MENU_WIFI
"<form action='/0wifi'   method='get'><button>Configure WiFi (No Scan)</button></form><br/>\n", // MENU_WIFINOSCAN
// "<form action='/info'    method='get'><button>Info</button></form><br/>\n", // MENU_INFO
// "<form action='/param'   method='get'><button>Setup</button></form><br/>\n",//MENU_PARAM
// "<form action='/close'   method='get'><button>Close</button></form><br/>\n", // MENU_CLOSE
// "<form action='/restart' method='get'><button>Restart</button></form><br/>\n",// MENU_RESTART
// "<form action='/exit'    method='get'><button>Exit</button></form><br/>\n",  // MENU_EXIT
// "<form action='/erase'   method='get'><button class='D'>Erase</button></form><br/>\n", // MENU_ERASE
"<hr><br/>" // MENU_SEP
};

// const char HTTP_PORTAL_OPTIONS[]   PROGMEM = strcat(HTTP_PORTAL_MENU[0] , HTTP_PORTAL_MENU[3] , HTTP_PORTAL_MENU[7]);
const char HTTP_PORTAL_OPTIONS[]   PROGMEM = "";
const char HTTP_ITEM_QI[]          PROGMEM = "<div role='img' aria-label='{r}%' title='{r}%' class='q q-{q} {i} {h}'></div>"; // rssi icons
const char HTTP_ITEM_QP[]          PROGMEM = "<div class='q {h}'>{r}%</div>"; // rssi percentage
const char HTTP_ITEM[]             PROGMEM = "<div><a href='#p' onclick='c(this)'>{v}</a>{qi}{qp}</div>"; // {q} = HTTP_ITEM_QI, {r} = HTTP_ITEM_QP
// const char HTTP_ITEM[]            PROGMEM = "<div><a href='#p' onclick='c(this)'>{v}</a> {R} {r}% {q} {e}</div>"; // test all tokens

const char HTTP_FORM_START[]       PROGMEM = "<form method='POST' action='{v}'>";
const char HTTP_FORM_WIFI[]        PROGMEM = "<label for='s'>WiFi Network Name</label><input id='s' name='s' maxlength='32' autocorrect='off' autocapitalize='none' placeholder='{v}'><br/><label for='p'>Password</label><input id='p' name='p' maxlength='64' type='password' placeholder='{p}'>";
const char HTTP_FORM_WIFI_END[]    PROGMEM = "";
const char HTTP_FORM_STATIC_HEAD[] PROGMEM = "<hr><br/>";
const char HTTP_FORM_END[]         PROGMEM = "<br/><br/><button type='submit'>Save</button></form>";
const char HTTP_FORM_LABEL[]       PROGMEM = "<label for='{i}'>{t}</label>";
const char HTTP_FORM_PARAM_HEAD[]  PROGMEM = "<hr><br/>";
const char HTTP_FORM_PARAM[]       PROGMEM = "<br/><input id='{i}' name='{n}' maxlength='{l}' value='{v}' {c}>";

const char HTTP_SCAN_LINK[]        PROGMEM = "<br/><form action='/wifi?refresh=1' method='POST'><button name='refresh' value='1'>Refresh</button></form>";
const char HTTP_SAVED[]            PROGMEM = "<div class='msg'>Saving Credentials<br/>If it fails to connect to WiFi, try again<br />Go to cointoys.fun to register user account</div>";
const char HTTP_PARAMSAVED[]       PROGMEM = "<div class='msg S'>Saved<br/></div>";
const char HTTP_END[]              PROGMEM = "</div></body></html>";
const char HTTP_ERASEBTN[]         PROGMEM = "<br/><form action='/erase' method='get'><button class='D'>Erase WiFi Config</button></form>";
const char HTTP_BACKBTN[]          PROGMEM = "<hr><br/><form action='/' method='get'><button>Back</button></form>";

const char HTTP_STATUS_ON[]        PROGMEM = "<div class='msg S'><strong>Connected</strong> to {v}<br/><em><small>with IP {i}</small></em></div>";
const char HTTP_STATUS_OFF[]       PROGMEM = "<div class='msg {c}'><strong>Not Connected</strong> to {v}{r}</div>";
const char HTTP_STATUS_OFFPW[]     PROGMEM = "<br/>Authentication Failure"; // STATION_WRONG_PASSWORD,  no eps32
const char HTTP_STATUS_OFFNOAP[]   PROGMEM = "<br/>AP not found";   // WL_NO_SSID_AVAIL
const char HTTP_STATUS_OFFFAIL[]   PROGMEM = "<br/>Could not Connect"; // WL_CONNECT_FAILED
const char HTTP_STATUS_NONE[]      PROGMEM = "<div class='msg'>No WiFi set</div>";
const char HTTP_BR[]               PROGMEM = "<br/>";

const char HTTP_STYLE[]            PROGMEM = "<style>"
".c,body{background-color:#210c4f;color:#fff;text-align:center;font-family:lato}div,input{padding:5px;font-size:1em;margin:5px 0;box-sizing:border-box;}"
"input,button,.msg{border-radius:.3rem;width: 100%}"
"button,input[type='button'],input[type='submit']{cursor:pointer;border:0;background-color:#fff;color:#5600B5;line-height:2.4rem;font-size:1.2rem;width:100%}"
"input[type='file']{border:1px solid #1fa3ec}"
"button:hover,input[type='button'],input[type='submit']{color:#fff;background-color:#ffbf01}"
".wrap {text-align:center;display:inline-block;min-width:260px;max-width:500px}"
".q[role=img]{-webkit-filter:invert(1);filter:invert(1);}"
// links
"a{color:#fff;font-weight:700;text-decoration:none}a:hover{color:#1fa3ec;text-decoration:underline}"
// quality icons
".q{height:16px;margin:0;padding:0 5px;text-align:right;min-width:38px;float:right}.q.q-0:after{background-position-x:0}.q.q-1:after{background-position-x:-16px}.q.q-2:after{background-position-x:-32px}.q.q-3:after{background-position-x:-48px}.q.q-4:after{background-position-x:-64px}.q.l:before{background-position-x:-80px;padding-right:5px}.ql .q{float:left}.q:after,.q:before{content:'';width:16px;height:16px;display:inline-block;background-repeat:no-repeat;background-position: 16px 0;"
"background-image:url('data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAGAAAAAQCAMAAADeZIrLAAAAJFBMVEX///8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADHJj5lAAAAC3RSTlMAIjN3iJmqu8zd7vF8pzcAAABsSURBVHja7Y1BCsAwCASNSVo3/v+/BUEiXnIoXkoX5jAQMxTHzK9cVSnvDxwD8bFx8PhZ9q8FmghXBhqA1faxk92PsxvRc2CCCFdhQCbRkLoAQ3q/wWUBqG35ZxtVzW4Ed6LngPyBU2CobdIDQ5oPWI5nCUwAAAAASUVORK5CYII=');}"
// icons @2x media query (32px rescaled)
"@media (-webkit-min-device-pixel-ratio: 2),(min-resolution: 192dpi){.q:before,.q:after {"
"background-image:url('data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAALwAAAAgCAMAAACfM+KhAAAALVBMVEX///8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADAOrOgAAAADnRSTlMAESIzRGZ3iJmqu8zd7gKjCLQAAACmSURBVHgB7dDBCoMwEEXRmKlVY3L//3NLhyzqIqSUggy8uxnhCR5Mo8xLt+14aZ7wwgsvvPA/ofv9+44334UXXngvb6XsFhO/VoC2RsSv9J7x8BnYLW+AjT56ud/uePMdb7IP8Bsc/e7h8Cfk912ghsNXWPpDC4hvN+D1560A1QPORyh84VKLjjdvfPFm++i9EWq0348XXnjhhT+4dIbCW+WjZim9AKk4UZMnnCEuAAAAAElFTkSuQmCC');"
"background-size: 95px 16px;}}"
// msg callouts
".msg{padding:20px;margin:20px 0;border:1px solid #eee;border-left-width:5px;border-left-color:#777}.msg h4{margin-top:0;margin-bottom:5px}.msg.P{border-left-color:#1fa3ec}.msg.P h4{color:#1fa3ec}.msg.D{border-left-color:#dc3630}.msg.D h4{color:#dc3630}.msg.S{border-left-color: #5cb85c}.msg.S h4{color: #5cb85c}"
// lists
"dt{font-weight:bold}dd{margin:0;padding:0 0 0.5em 0;min-height:12px}"
"td{vertical-align: top;}"
".h{display:none}"
"button.D{background-color:#dc3630}"
// invert
"body.invert,body.invert a,body.invert h1 {background-color:#060606;color:#fff;}"
"body.invert .msg{color:#fff;background-color:#282828;border-top:1px solid #555;border-right:1px solid #555;border-bottom:1px solid #555;}"
"body.invert .q[role=img]{-webkit-filter:invert(1);filter:invert(1);}"
"input:disabled {opacity: 0.5;}"
"</style>";

const char HTTP_HELP[]             PROGMEM =
 "<br/><h3>Available Pages</h3><hr>"
 "<table class='table'>"
 "<thead><tr><th>Page</th><th>Function</th></tr></thead><tbody>"
 "<tr><td><a href='/'>/</a></td>"
 "<td>Menu page.</td></tr>"
 "<tr><td><a href='/wifi'>/wifi</a></td>"
 "<td>Show WiFi scan results and enter WiFi configuration.(/0wifi noscan)</td></tr>"
 "<tr><td><a href='/wifisave'>/wifisave</a></td>"
 "<td>Save WiFi configuration information and configure device. Needs variables supplied.</td></tr>"
 "<tr><td><a href='/param'>/param</a></td>"
 "<td>Parameter page</td></tr>"
 "<tr><td><a href='/info'>/info</a></td>"
 "<td>Information page</td></tr>"
 "<tr><td><a href='/close'>/close</a></td>"
 "<td>Close the captiveportal popup,configportal will remain active</td></tr>"
 "<tr><td><a href='/exit'>/exit</a></td>"
 "<td>Exit Config Portal, configportal will close</td></tr>"
 "<tr><td><a href='/restart'>/restart</a></td>"
 "<td>Reboot the device</td></tr>"
 "<tr><td><a href='/erase'>/erase</a></td>"
 "<td>Erase WiFi configuration and reboot Device. Device will not reconnect to a network until new WiFi configuration data is entered.</td></tr>"
 "</table>"
 "<p/>More information about WiFiManager at <a href='https://github.com/tzapu/WiFiManager'>https://github.com/tzapu/WiFiManager</a>.";

#ifdef WM_JSTEST
const char HTTP_JS[] PROGMEM = 
"<script>function postAjax(url, data, success) {"
"    var params = typeof data == 'string' ? data : Object.keys(data).map("
"            function(k){ return encodeURIComponent(k) + '=' + encodeURIComponent(data[k]) }"
"        ).join('&');"
"    var xhr = window.XMLHttpRequest ? new XMLHttpRequest() : new ActiveXObject(\"Microsoft.XMLHTTP\");"
"    xhr.open('POST', url);"
"    xhr.onreadystatechange = function() {"
"        if (xhr.readyState>3 && xhr.status==200) { success(xhr.responseText); }"
"    };"
"    xhr.setRequestHeader('X-Requested-With', 'XMLHttpRequest');"
"    xhr.setRequestHeader('Content-Type', 'application/x-www-form-urlencoded');"
"    xhr.send(params);"
"    return xhr;}"
"postAjax('/status', 'p1=1&p2=Hello+World', function(data){ console.log(data); });"
"postAjax('/status', { p1: 1, p2: 'Hello World' }, function(data){ console.log(data); });"
"</script>";
#endif

// Info html
#ifdef ESP32
	const char HTTP_INFO_esphead[]    PROGMEM = "<h3>esp32</h3><hr><dl>";
	const char HTTP_INFO_chiprev[]    PROGMEM = "<dt>Chip Rev</dt><dd>{1}</dd>";
  const char HTTP_INFO_lastreset[]    PROGMEM = "<dt>Last reset reason</dt><dd>CPU0: {1}<br/>CPU1: {2}</dd>";
  const char HTTP_INFO_aphost[]       PROGMEM = "<dt>Acccess Point Hostname</dt><dd>{1}</dd>";  
#else 
	const char HTTP_INFO_esphead[]    PROGMEM = "<h3>esp8266</h3><hr><dl>";
	const char HTTP_INFO_flashsize[]  PROGMEM = "<dt>Real Flash Size</dt><dd>{1} bytes</dd>";
	const char HTTP_INFO_fchipid[]    PROGMEM = "<dt>Flash Chip ID</dt><dd>{1}</dd>";
	const char HTTP_INFO_corever[]    PROGMEM = "<dt>Core Version</dt><dd>{1}</dd>";
	const char HTTP_INFO_bootver[]    PROGMEM = "<dt>Boot Version</dt><dd>{1}</dd>";
	const char HTTP_INFO_memsketch[]  PROGMEM = "<dt>Memory - Sketch Size</dt><dd>Used / Total bytes<br/>{1} / {2}";
	const char HTTP_INFO_memsmeter[]  PROGMEM = "<br/><progress value='{1}' max='{2}'></progress></dd>";
	const char HTTP_INFO_lastreset[]  PROGMEM = "<dt>Last reset reason</dt><dd>{1}</dd>";
#endif

const char HTTP_INFO_freeheap[]   PROGMEM = "<dt>Memory - Free Heap</dt><dd>{1} bytes available</dd>"; 
const char HTTP_INFO_wifihead[]   PROGMEM = "<br/><h3>WiFi</h3><hr>";
const char HTTP_INFO_uptime[]     PROGMEM = "<dt>Uptime</dt><dd>{1} Mins {2} Secs</dd>";
const char HTTP_INFO_chipid[]     PROGMEM = "<dt>Chip ID</dt><dd>{1}</dd>";
const char HTTP_INFO_idesize[]    PROGMEM = "<dt>Flash Size</dt><dd>{1} bytes</dd>";
const char HTTP_INFO_sdkver[]     PROGMEM = "<dt>SDK Version</dt><dd>{1}</dd>";
const char HTTP_INFO_cpufreq[]    PROGMEM = "<dt>CPU Frequency</dt><dd>{1}MHz</dd>";
const char HTTP_INFO_apip[]       PROGMEM = "<dt>Access Point IP</dt><dd>{1}</dd>";
const char HTTP_INFO_apmac[]      PROGMEM = "<dt>Access Point MAC</dt><dd>{1}</dd>";
const char HTTP_INFO_apssid[]     PROGMEM = "<dt>SSID</dt><dd>{1}</dd>";
const char HTTP_INFO_apbssid[]    PROGMEM = "<dt>BSSID</dt><dd>{1}</dd>";
const char HTTP_INFO_staip[]      PROGMEM = "<dt>Station IP</dt><dd>{1}</dd>";
const char HTTP_INFO_stagw[]      PROGMEM = "<dt>Station Gateway</dt><dd>{1}</dd>";
const char HTTP_INFO_stasub[]     PROGMEM = "<dt>Station Subnet</dt><dd>{1}</dd>";
const char HTTP_INFO_dnss[]       PROGMEM = "<dt>DNS Server</dt><dd>{1}</dd>";
const char HTTP_INFO_host[]       PROGMEM = "<dt>Hostname</dt><dd>{1}</dd>";
const char HTTP_INFO_stamac[]     PROGMEM = "<dt>Station MAC</dt><dd>{1}</dd>";
const char HTTP_INFO_conx[]       PROGMEM = "<dt>Connected</dt><dd>{1}</dd>";
const char HTTP_INFO_autoconx[]   PROGMEM = "<dt>Autoconnect</dt><dd>{1}</dd>";
const char HTTP_INFO_temp[]       PROGMEM = "<dt>Temperature</dt><dd>{1} C&deg; / {2} F&deg;</dd>";

// Strings
const char S_y[]                  PROGMEM = "Yes";
const char S_n[]                  PROGMEM = "No";
const char S_enable[]             PROGMEM = "Enabled";
const char S_disable[]            PROGMEM = "Disabled";
const char S_GET[]                PROGMEM = "GET";
const char S_POST[]               PROGMEM = "POST";
const char S_NA[]                 PROGMEM = "Unknown";
const char S_passph[]             PROGMEM = "********";
const char S_titlewifisaved[]     PROGMEM = "Credentials Saved";
const char S_titlewifisettings[]  PROGMEM = "Settings Saved";
const char S_titlewifi[]          PROGMEM = "Config ESP";
const char S_titleinfo[]          PROGMEM = "Info";
const char S_titleparam[]         PROGMEM = "Setup";
const char S_titleparamsaved[]    PROGMEM = "Setup Saved";
const char S_titleexit[]          PROGMEM = "Exit";
const char S_titlereset[]         PROGMEM = "Reset";
const char S_titleerase[]         PROGMEM = "Erase";
const char S_titleclose[]         PROGMEM = "Close";
const char S_options[]            PROGMEM = "options";
const char S_nonetworks[]         PROGMEM = "No networks found. Refresh to scan again.";
const char S_staticip[]           PROGMEM = "Static IP";
const char S_staticgw[]           PROGMEM = "Static Gateway";
const char S_staticdns[]          PROGMEM = "Static DNS";
const char S_subnet[]             PROGMEM = "Subnet";
const char S_exiting[]            PROGMEM = "Exiting";
const char S_resetting[]          PROGMEM = "Module will reset in a few seconds.";
const char S_closing[]            PROGMEM = "You can close the page, portal will continue to run";
const char S_error[]              PROGMEM = "An Error Occured";
const char S_notfound[]           PROGMEM = "File Not Found\n\n";
const char S_uri[]                PROGMEM = "URI: ";
const char S_method[]             PROGMEM = "\nMethod: ";
const char S_args[]               PROGMEM = "\nArguments: ";
const char S_parampre[]           PROGMEM = "param_";

// debug strings
const char D_HR[]                 PROGMEM = "--------------------";

// END WIFI_MANAGER_OVERRIDE_STRINGS
#endif

// -----------------------------------------------------------------------------------------------
// DO NOT EDIT BELOW THIS LINE

const uint8_t _nummenutokens = 9;
const char * const _menutokens[9] PROGMEM = {
    "wifi",
    "wifinoscan",
    "info",
    "param",
    "close",
    "restart",
    "exit",
    "erase",
    "sep"
};

const char R_root[]               PROGMEM = "/";
const char R_wifi[]               PROGMEM = "/wifi";
const char R_wifinoscan[]         PROGMEM = "/0wifi";
const char R_wifisave[]           PROGMEM = "/wifisave";
const char R_info[]               PROGMEM = "/info";
const char R_param[]              PROGMEM = "/param";
const char R_paramsave[]          PROGMEM = "/paramsave";
const char R_restart[]            PROGMEM = "/restart";
const char R_exit[]               PROGMEM = "/exit";
const char R_close[]              PROGMEM = "/close";
const char R_erase[]              PROGMEM = "/erase"; 
const char R_status[]             PROGMEM = "/status";


//Strings
const char S_ip[]                 PROGMEM = "ip";
const char S_gw[]                 PROGMEM = "gw";
const char S_sn[]                 PROGMEM = "sn";
const char S_dns[]                PROGMEM = "dns";

// softap ssid default prefix
#ifdef ESP8266
	const char S_ssidpre[]        PROGMEM = "ESP";
#elif defined(ESP32)
	const char S_ssidpre[]        PROGMEM = "ESP32";
#else
	const char S_ssidpre[]        PROGMEM = "WM";
#endif

//Tokens
//@todo consolidate and reduce
const char T_ss[]                 PROGMEM = "{"; // token start sentinel
const char T_es[]                 PROGMEM = "}"; // token end sentinel
const char T_1[]                  PROGMEM = "{1}"; // @token 1
const char T_2[]                  PROGMEM = "{2}"; // @token 2
const char T_v[]                  PROGMEM = "{v}"; // @token v
const char T_I[]                  PROGMEM = "{I}"; // @token I
const char T_i[]                  PROGMEM = "{i}"; // @token i
const char T_n[]                  PROGMEM = "{n}"; // @token n
const char T_p[]                  PROGMEM = "{p}"; // @token p
const char T_t[]                  PROGMEM = "{t}"; // @token t
const char T_l[]                  PROGMEM = "{l}"; // @token l
const char T_c[]                  PROGMEM = "{c}"; // @token c
const char T_e[]                  PROGMEM = "{e}"; // @token e
const char T_q[]                  PROGMEM = "{q}"; // @token q
const char T_r[]                  PROGMEM = "{r}"; // @token r
const char T_R[]                  PROGMEM = "{R}"; // @token R
const char T_h[]                  PROGMEM = "{h}"; // @token h

// http
const char HTTP_HEAD_CL[]         PROGMEM = "Content-Length";
const char HTTP_HEAD_CT[]         PROGMEM = "text/html";
const char HTTP_HEAD_CT2[]        PROGMEM = "text/plain";
const char HTTP_HEAD_CORS[]       PROGMEM = "Access-Control-Allow-Origin";
const char HTTP_HEAD_CORS_ALLOW_ALL[]  PROGMEM = "*";

const char * const WIFI_STA_STATUS[] PROGMEM
{
  "WL_IDLE_STATUS",     // 0 STATION_IDLE
  "WL_NO_SSID_AVAIL",   // 1 STATION_NO_AP_FOUND
  "WL_SCAN_COMPLETED",  // 2
  "WL_CONNECTED",       // 3 STATION_GOT_IP
  "WL_CONNECT_FAILED",  // 4 STATION_CONNECT_FAIL, STATION_WRONG_PASSWORD(NI)
  "WL_CONNECTION_LOST", // 5
  "WL_DISCONNECTED",    // 6 
  "WL_STATION_WRONG_PASSWORD" // 7 KLUDGE 
};

#ifdef ESP32
const char * const AUTH_MODE_NAMES[] PROGMEM
{
    "OPEN",
    "WEP",             
    "WPA_PSK",         
    "WPA2_PSK",        
    "WPA_WPA2_PSK",    
    "WPA2_ENTERPRISE", 
    "MAX"
};
#elif defined(ESP8266)
const char * const AUTH_MODE_NAMES[] PROGMEM
{
    "",
    "",
    "WPA_PSK",      // 2 ENC_TYPE_TKIP
    "",
    "WPA2_PSK",     // 4 ENC_TYPE_CCMP
    "WEP",          // 5 ENC_TYPE_WEP
    "",
    "OPEN",         //7 ENC_TYPE_NONE
    "WPA_WPA2_PSK", // 8 ENC_TYPE_AUTO
};
#endif

const char* const WIFI_MODES[] PROGMEM = { "NULL", "STA", "AP", "STA+AP" };


#ifdef ESP32
// as 2.5.2
// typedef struct {
//     char                  cc[3];   /**< country code string */
//     uint8_t               schan;   /**< start channel */
//     uint8_t               nchan;   /**< total channel number */
//     int8_t                max_tx_power;   /**< This field is used for getting WiFi maximum transmitting power, call esp_wifi_set_max_tx_power to set the maximum transmitting power. */
//     wifi_country_policy_t policy;  /**< country policy */
// } wifi_country_t;
const wifi_country_t WM_COUNTRY_US{"US",1,11,CONFIG_ESP32_PHY_MAX_TX_POWER,WIFI_COUNTRY_POLICY_AUTO};
const wifi_country_t WM_COUNTRY_CN{"CN",1,13,CONFIG_ESP32_PHY_MAX_TX_POWER,WIFI_COUNTRY_POLICY_AUTO};
const wifi_country_t WM_COUNTRY_JP{"JP",1,14,CONFIG_ESP32_PHY_MAX_TX_POWER,WIFI_COUNTRY_POLICY_AUTO};
#elif defined(ESP8266)
// typedef struct {
//     char cc[3];               /**< country code string */
//     uint8_t schan;            /**< start channel */
//     uint8_t nchan;            /**< total channel number */
//     uint8_t policy;           /**< country policy */
// } wifi_country_t;
const wifi_country_t WM_COUNTRY_US{"US",1,11,WIFI_COUNTRY_POLICY_AUTO};
const wifi_country_t WM_COUNTRY_CN{"CN",1,13,WIFI_COUNTRY_POLICY_AUTO};
const wifi_country_t WM_COUNTRY_JP{"JP",1,14,WIFI_COUNTRY_POLICY_AUTO};
#endif

#endif
