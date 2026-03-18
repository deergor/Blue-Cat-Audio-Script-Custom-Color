<?xml version="1.0" encoding="utf-8" ?>
<DUMMY>
  <!-- Simple Extensions to the Kitty Language for the model layer -->
  
  <!-- Constant value parameter: -->
  <!-- Parameters: value -->
  <TEMPLATE id="CONST_PARAM">
      <PARAM id="$id$" default="$value$" min="$value$" max="$value$"/>
  </TEMPLATE>
  
  <!-- exclusive link template for booleans -->
  <TEMPLATE id="PARAM_MULTI_EXCLUSIVE_LINK" param_ids="#undefined params_ids#">
    <PARAM_MULTI_LINK from="$param_ids$" to="$param_ids$" trigger_min="1" reverse="true" mux_function="max"/>
  </TEMPLATE>
    
  <!-- build time IF -->
  <TEMPLATE id="IF" condition="0">
      <REPEAT count="($condition$)!=0" index_name="_if_index_">
          <TEMPLATE_INNER_CONTENT/>
      </REPEAT>
  </TEMPLATE>

  <!-- Simple RGB color object definition -->
  <TEMPLATE id="TPL_COLOR_OBJECT" default="#000000" persistent="false" locked="" persistent_when_default="true">
    <LOCAL_VARIABLE id="default_color_r" script="string s=&quot;$default$&quot;; return formatFloat(double(parseInt(s.substr(1,2),16))/255.0,&quot;&quot;,0,3)"/>
    <LOCAL_VARIABLE id="default_color_g" script="string s=&quot;$default$&quot;; return formatFloat(double(parseInt(s.substr(3,2),16))/255.0,&quot;&quot;,0,3)"/>
    <LOCAL_VARIABLE id="default_color_b" script="string s=&quot;$default$&quot;; return formatFloat(double(parseInt(s.substr(5,2),16))/255.0,&quot;&quot;,0,3)"/>
    <LOCAL_VARIABLE id="has_lock" script="string lockedString=&quot;$locked$&quot;; if(lockedString.length!=0) return &quot;1&quot;; else return &quot;0&quot;"/>
    <TEXT value="$default_color_r$"/>
    <PARAM id="$id$.r" default="$default_color_r$" max="1" />
    <PARAM id="$id$.g" default="$default_color_g$" max="1" />
    <PARAM id="$id$.b" default="$default_color_b$" max="1" />

    <REPEAT count="$has_lock$">
        <GROUP id="$id$" object_ids="$id$.r;$id$.g;$id$.b" object_aliases="r;g;b" persistent="$persistent$" persistent_when_default="$persistent_when_default$" locked="locked"/>
    </REPEAT>
    <REPEAT count="$has_lock$==0">
        <GROUP id="$id$" object_ids="$id$.r;$id$.g;$id$.b" object_aliases="r;g;b" persistent="$persistent$" persistent_when_default="$persistent_when_default$" />
    </REPEAT>
  </TEMPLATE>

  <!-- basic link between color components -->
   <TEMPLATE id="TPL_COLOR_LINK" enabled="true" from="#UNDEFINED#" to="#UNDEFINED#">
    <REPEAT index_list="r;g;b">
        <PARAM_LINK from="$from$.$index$" to="$to$.$index$" enabled="$enabled$"/>
    </REPEAT>
  </TEMPLATE>

</DUMMY>