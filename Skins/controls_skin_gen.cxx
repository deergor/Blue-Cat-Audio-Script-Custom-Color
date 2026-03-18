// utility to replace a string
void replaceString(string & ioString,const string &in stringToFind,const string &in replaceString)
{
    array<string>@ pieces=ioString.split(stringToFind);
    if(@pieces!=null)
    {
      if(pieces.length>0)
        ioString=pieces[0];
      for(uint i=1;i<pieces.length;i++)
      {
          ioString+=replaceString;
          ioString+=pieces[i];
      }
    }
}

string LoadTemplate()
{
    file f;
    string content;
    if(f.open("$_DIR_$/controls_skin_template.inc","r")>=0)
    {
       content=f.readString(f.getSize());
       f.close();
    }
    return content;
}

string templateContent=LoadTemplate();

string GetKnobStyle(uint style)
{
    switch (style)
    {
    case 0:
        return "PNS_SILVER_BLUE_MODERN_KNOB";
    case 1:
        return "PNS_SILVER_PINK_MODERN_KNOB";
    case 2:
        return "PNS_BLACK_BLUE_MODERN_KNOB";
    case 3:
        return "PNS_BLACK_PINK_MODERN_KNOB";
    case 4:
        return "PNS_BLACK_VINTAGE_B_KNOB";
    case 5:
        return "PNS_BLACK_CHICKEN_B_KNOB";
    case 6:
        return "PNS_WHITE_CHICKEN_B_KNOB";
    case 7:
        return "PNS_CREAM_CHICKEN_B_KNOB";
    case 8:
        return "PNS_WHITE_STOVE_KNOB";
    case 9:
        return "PNS_BLACK_STOVE_KNOB";
    case 10:
        return "PNS_BLACKORANGE_STOVE_KNOB";
    case 11:
        return "PNS_ORANGE_STOVE_KNOB";
    case 12:
        return "PNS_BLACK_SKIRTED_B_KNOB";
    case 13:
        return "PNS_SILVER_B_KNOB";
    case 14:
        return "PNS_GOLD_B_KNOB";
    case 15:
        return "PNS_GREY_FLAT_KNOB";
    case 16:
        return "PNS_BLUE_FLAT_KNOB";
    case 17:
        return "PNS_ORANGE_FLAT_KNOB";
    case 18:
        return "PNS_YELLOW_FLAT_KNOB";   
    case 19:
        return "PNS_GREEN_FLAT_KNOB";  
    case 20:
        return "PNS_RED_FLAT_KNOB";   
        // New (V3.6)
    case 21:
        return "PNS_BLUE_STOVE_B_KNOB";
    case 22:
        return "PNS_PINK_STOVE_B_KNOB";
    case 23:
        return "PNS_GREEN_STOVE_B_KNOB";
    case 24:
        return "PNS_BLACK_CUPCAKE_B_KNOB";
    case 25:
        return "PNS_CREAM_CUPCAKE_B_KNOB";
    case 26:
        return "PNS_BLACK_METAL_B_KNOB";
    case 27:
        return "PNS_SILVER_METAL_B_KNOB";
    case 28:
        return "PNS_BLUE_METAL_B_KNOB";
    case 29:
        return "PNS_RED_METAL_B_KNOB";
    case 30:
        return "PNS_BLACK_STUDIO_B_KNOB";
    case 31:
        return "PNS_GREY_STUDIO_B_KNOB";
    case 32:
        return "PNS_BLUE_STUDIO_B_KNOB";
    case 33:
        return "PNS_RED_STUDIO_B_KNOB";
    case 34:
        return "PNS_BLUE_MIXER_B_KNOB";
    case 35:
        return "PNS_RED_MIXER_B_KNOB";
    case 36:
        return "PNS_GREEN_MIXER_B_KNOB";
    case 37:
        return "PNS_SILVER_FLUTED_B_KNOB";
    case 38:
        return "PNS_GOLD_FLUTED_B_KNOB";
    case 39:
        return "PNS_FADER";
    case 40:
        return "PNS_SLIM_FADER";
    case 41:
        return "PNS_FLAT_FADER";
    }
    return "PNS_SILVER_BLUE_MODERN_KNOB";
}

string GetSwitchStyle(uint style)
{
    switch (style)
    {
    case 0:
        return "PNS_VSELECT_SWITCH";
    case 1:
        return "PNS_VSELECT_SWITCH";
    case 2:
        return "PNS_CLASSIC_SWITCH";
    case 3:
        return "PNS_CLASSIC_SWITCH";
    case 4:
        return "PNS_VINTAGE_SWITCH";
    case 5:
        return "PNS_VINTAGE_SWITCH";
    case 6:
        return "PNS_VINTAGE_SWITCH";
    case 7:
        return "PNS_VINTAGE_SWITCH";
    case 8:
        return "PNS_CLASSIC_SWITCH";
    case 9:
        return "PNS_CLASSIC_SWITCH";
    case 10:
        return "PNS_CLASSIC_SWITCH";
    case 11:
        return "PNS_CLASSIC_SWITCH";
    case 12:
        return "PNS_VINTAGE_SWITCH";
    case 13:
        return "PNS_VINTAGE_SWITCH";
    case 14:
        return "PNS_VINTAGE_SWITCH";
    case 15:
        return "PNS_CLASSIC_SWITCH";
    case 16:
        return "PNS_CLASSIC_SWITCH";
    case 17:
        return "PNS_CLASSIC_SWITCH";
    case 18:
        return "PNS_CLASSIC_SWITCH";   
    case 19:
        return "PNS_CLASSIC_SWITCH";  
    case 20:
        return "PNS_CLASSIC_SWITCH";   
    }
    return "PNS_CLASSIC_SWITCH";
}

string GetMeterStyle(uint style)
{
    switch (style)
    {
    case 0:
        return "PNS_RED_LED";
    case 1:
        return "PNS_BLUE_LED";
    case 2:
        return "PNS_GREEN_LED";
    case 3:
        return "PNS_ORANGE_LED";
    case 4:
        return "PNS_SMALL_RED_LED";
    case 5:
        return "PNS_ANALOG_VU";
    case 6:
        return "PNS_ANALOG_VU_SQUARE";
    }
    return "PNS_RED_LED";
}

string GetGroupingStyle(uint style)
{
    switch (style)
    {
    case 0:
        return "PNS_DASHED_GROUP_BOX";
    case 1:
        return "PNS_PLAIN_GROUP_BOX";
    case 2:
        return "PNS_FILLED_GROUP_BOX";
    }
    return "PNS_DASHED_GROUP_BOX";
}

string GetTextColor(uint style)
{
    switch (style)
    {
    case 0:
        return "#eaeaea";
    case 1:
        return "#aaaaaa";
    case 2:
        return "#111111";
    case 3: // blue
        return "#57bbfc";
    case 4: // orange
        return "#ffa569";
    case 5: // yellow
        return "#f2f487";
    case 6: // green
        return "#77da74";
    case 7:  // red
        return "#f64253";
    }
    return "#eaeaea";
}

string GetTextSize(int style)
{
    switch (style)
    {
    case -2:
        return "9";
    case -1:
        return "10";
    case 0:
        return "11";
    case 1:
        return "13";
    case 2:
        return "15";
    case 3:
        return "18";
    }
    return "11";
}

int minValue(int i, int j)
{
    if (i > j)
        return j;
    else
        return i;
}

void GenerateControls()
{
    string content;
    if (gui_gen.enable_custom_gui!=0 && $script_gui_path$.length > 0)
    {
        // open the file
        file f;
        if (f.open($script_gui_path$, "r") >= 0)
        {
            // read content
            content=f.readString(f.getSize());
            f.close();

            // add SCRIPT_DATA_PATH variable definition, when in edit mode (already defined otherwise)
            string editMode="$SCRIPT_EDIT_MODE$";
            if (editMode == "true")
            {
                // generate SCRIPT_DATA_PATH variable
                string dataPath = $script_file_path$;
                int index = dataPath.findLast(".");
                if (index > 0)
                {
                    dataPath = dataPath.substr(0, index);
                }
                dataPath+="-data";

                // insert into skin after the SKIN tag
                string variableString = "\n<IF_EDITABLE><VARIABLE id=\"SCRIPT_DATA_PATH\" value=\"" + dataPath + "\"/></IF_EDITABLE>\n";
                int skinTagIndex=content.findFirst("<SKIN");
                if (skinTagIndex >= 0)
                {
                    skinTagIndex=content.findFirst(">",skinTagIndex);
                    if (skinTagIndex >= 0)
                    {
                        skinTagIndex++;
                        content.insert(skinTagIndex,variableString);
                    }
                }
            }
        }
    }
    else
    {
        content = templateContent;
        // number of parameters / strings
        string value = minValue(int($script_input_params_count$),$SCRIPT_PARAMS_COUNT$);
        replaceString(content, "#in_params_count#", value);
        value = minValue(int($script_output_params_count$), $SCRIPT_OUT_PARAMS_COUNT$);
        replaceString(content, "#out_params_count#", value);
        value = minValue(int($script_private_output_params_count$),$SCRIPT_PRIVATE_OUT_PARAMS_COUNT$);
        replaceString(content, "#private_out_params_count#", value);
        value = minValue(int($script_input_strings_count$), $SCRIPT_STRINGS_COUNT$);
        replaceString(content, "#in_strings_count#", value);
        value = minValue(int($script_output_strings_count$), $SCRIPT_OUT_STRINGS_COUNT$);
        replaceString(content, "#out_strings_count#", value);

        // grid dimensions & grouping
        value = int(x_controls_display_count);
        replaceString(content, "#x_controls_display_count#", value);
        value = int(y_controls_display_count);
        replaceString(content, "#y_controls_display_count#", value);
        value = int(x_groups_count);
        replaceString(content, "#x_groups_count#", value);
        value = int(y_groups_count);
        replaceString(content, "#y_groups_count#", value);
        value = int(gui_gen.groups_display_count);
        replaceString(content, "#x_group_size#", value);
        value = int(y_group_size);
        replaceString(content, "#y_group_size#", value);
        value = int(x_last_group_size);
        replaceString(content, "#x_last_group_size#", value);
        value = int(y_last_group_size);
        replaceString(content, "#y_last_group_size#", value);

        // styles
        uint style = uint(gui_gen.controls_style);
        replaceString(content, "#knob_style#", GetKnobStyle(style));
        replaceString(content, "#switch_style#",GetSwitchStyle(style));
        style=uint(gui_gen.meters_style);
        replaceString(content, "#meter_style#",GetMeterStyle(style));
        style = uint(gui_gen.grouping_style);
        replaceString(content, "#grouping_style#", GetGroupingStyle(style));
        uint textColorValue = uint(gui_gen.text_color);
        replaceString(content, "#text_color#", GetTextColor(textColorValue));
        int textSize = int(gui_gen.text_size);
        replaceString(content, "#text_size#", GetTextSize(textSize));
        uint int_layout_type=uint(gui_gen.layout_type);
        replaceString(content, "#layout_type_int#", formatUInt(int_layout_type));
        switch (int_layout_type)
        {
        case 0:
        {
            replaceString(content, "#x_length#", "width");
            replaceString(content, "#y_length#", "height");
            replaceString(content, "#layout_type_text#", "column");
            replaceString(content, "#other_layout_type_text#", "row");
            break;
        }
        case 1:
        default:
        {
            replaceString(content, "#x_length#", "height");
            replaceString(content, "#y_length#", "width");
            replaceString(content, "#layout_type_text#", "row");
            replaceString(content, "#other_layout_type_text#", "column");
            break;
        }
        }

    }
    controls_widget.innerKUIML=content;
}

string GetBgColor(uint style)
{
    switch (style)
    {
    case 0:
        return "";
    case 1:
        return "black";
    case 2:
        return "dark-blue";
    case 3:
        return "green";
    case 4:
        return "grey";
    case 5:
        return "khaki";
    case 6:
        return "old-blue";
    case 7:
        return "orange";
    case 8:
        return "pink";
    case 9:
        return "purple";
    case 10:
        return "red";
    case 11:
        return "turquoise";
    }
    return "";
}

string GetCustomColorHex()
{
    // Convert RGB to hex string for background_color attribute
    string hexChars = "0123456789ABCDEF";
    int r = int(custom_color_r);
    int g = int(custom_color_g);
    int b = int(custom_color_b);
    string hex = "#";
    hex += hexChars.substr(r / 16, 1);
    hex += hexChars.substr(r % 16, 1);
    hex += hexChars.substr(g / 16, 1);
    hex += hexChars.substr(g % 16, 1);
    hex += hexChars.substr(b / 16, 1);
    hex += hexChars.substr(b % 16, 1);
    return hex;
}

string GetCustomColorHex2()
{
    // Convert RGB2 to hex string for gradient end color
    string hexChars = "0123456789ABCDEF";
    int r = int(custom_color_r2);
    int g = int(custom_color_g2);
    int b = int(custom_color_b2);
    string hex = "#";
    hex += hexChars.substr(r / 16, 1);
    hex += hexChars.substr(r % 16, 1);
    hex += hexChars.substr(g / 16, 1);
    hex += hexChars.substr(g % 16, 1);
    hex += hexChars.substr(b / 16, 1);
    hex += hexChars.substr(b % 16, 1);
    return hex;
}

string GetGradientCanvasKUIML()
{
    // Generate CANVAS element with gradient render script
    // Optimized: renders in bands of 4px height for performance
    // Supports 5 gradient styles: Linear(0), Radial(1), Angular(2), Reflected(3), Diamond(4)
    string r1 = formatInt(int(custom_color_r));
    string g1 = formatInt(int(custom_color_g));
    string b1 = formatInt(int(custom_color_b));
    string r2 = formatInt(int(custom_color_r2));
    string g2 = formatInt(int(custom_color_g2));
    string b2 = formatInt(int(custom_color_b2));
    string angle = formatInt(int(custom_color_gradient_angle));
    string scale = formatInt(int(custom_color_gradient_scale));
    string gradStyle = formatInt(int(custom_color_gradient_style));
    string reverseStr = formatInt(int(custom_color_gradient_reverse));
    string alignStr = formatInt(int(custom_color_gradient_align_layer));
    
    string script = "auto@ ctx = Kt::Graphics::GetCurrentContext();";
    script += "double w = custom_bg_canvas.width;";
    script += "double h = custom_bg_canvas.height;";
    script += "double ang = " + angle + " * 3.14159265359 / 180.0;";
    script += "double scl = " + scale + " / 100.0;";
    script += "int gs = " + gradStyle + ";";
    script += "int rv = " + reverseStr + ";";
    script += "double cosA = cos(ang); double sinA = sin(ang);";
    script += "double cx = w/2; double cy = h/2;";
    script += "double maxD = abs(w*cosA)+abs(h*sinA);";
    script += "if(maxD &lt; 1) maxD = 1;";
    script += "double maxR = sqrt(cx*cx+cy*cy);";
    script += "if(maxR &lt; 1) maxR = 1;";
    // Use bands of 4px for performance - sample at center of band
    script += "int step = 4;";
    script += "for(int py = 0; py &lt; int(h); py+=step) {";
    script += "int bh = step; if(py+bh &gt; int(h)) bh = int(h)-py;";
    script += "for(int px = 0; px &lt; int(w); px+=step) {";
    script += "int bw = step; if(px+bw &gt; int(w)) bw = int(w)-px;";
    script += "double spx = px+bw/2; double spy = py+bh/2;";
    script += "double t = 0;";
    // Linear
    script += "if(gs==0){double d=spx*cosA+spy*sinA;t=(d+maxD/2)/maxD;t=(t-0.5)/scl+0.5;}";
    // Radial
    script += "else if(gs==1){double dx=spx-cx;double dy=spy-cy;t=sqrt(dx*dx+dy*dy)/(maxR*scl);}";
    // Angular
    script += "else if(gs==2){double dx=spx-cx;double dy=spy-cy;double a=atan2(dy,dx)+3.14159265359+ang;";
    script += "a=a-floor(a/(2*3.14159265359))*2*3.14159265359;t=a/(2*3.14159265359);}";
    // Reflected
    script += "else if(gs==3){double d=spx*cosA+spy*sinA;t=(d+maxD/2)/maxD;t=(t-0.5)/scl+0.5;t=abs(t*2-1);}";
    // Diamond
    script += "else if(gs==4){double dx=abs(spx-cx);double dy=abs(spy-cy);t=(dx*abs(cosA)+dy*abs(sinA)+dx*abs(sinA)+dy*abs(cosA))/(maxD*scl);}";
    // Reverse + clamp
    script += "if(rv!=0)t=1-t;";
    script += "if(t&lt;0)t=0;if(t&gt;1)t=1;";
    // Color
    script += "ctx.source.SetRGB(" + r1 + "/255.0*(1-t)+" + r2 + "/255.0*t," + g1 + "/255.0*(1-t)+" + g2 + "/255.0*t," + b1 + "/255.0*(1-t)+" + b2 + "/255.0*t);";
    script += "ctx.path.Clear();ctx.path.Rectangle(px,py,bw,bh);ctx.FillPath();";
    script += "}}";
    
    return "<CANVAS id=\"custom_bg_canvas\" width=\"100%\" height=\"100%\" render_script=\"" + script + "\" requires=\"custom_bg_canvas.width;custom_bg_canvas.height\"/>";
}

void GenerateBackground()
{
    string bg_color=GetBgColor(uint(gui_gen.background_color));
    string bgKUIML="";
    
    // Check if custom color is selected (index 12)
    bool isCustomColor = (uint(gui_gen.background_color) == 12);
    bool useGradient = (custom_color_gradient_enabled != 0);
    
    switch (uint(gui_gen.background_style))
    {
    //None
    case 2:
    {
        bgKUIML = "<SKIN></SKIN>";
        break;
    }
    //flat
    case 1:
    {
        if (isCustomColor)
        {
            if (useGradient)
            {
                bgKUIML = "<SKIN width=\"100%\" height=\"100%\" h_margin=\"3\">" + GetGradientCanvasKUIML() + "</SKIN>";
            }
            else
            {
                string hexColor = GetCustomColorHex();
                bgKUIML = "<SKIN width=\"100%\" height=\"100%\" h_margin=\"3\"><WIDGET width=\"100%\" height=\"100%\" background_color=\"" + hexColor + "\"/></SKIN>";
            }
        }
        else
        {
            bgKUIML = "<SKIN width=\"100%\" height=\"100%\" h_margin=\"3\"><IMAGE image=\"$THEME_NAME$-Theme/decorations/" + bg_color + "/bg_center.png\" repeat=\"true\" width=\"100%\" height=\"100%\" ignore_mask_files=\"true\"/></SKIN>";
        }
        break;
    }
    // hardware is default
    case 0:
    default:
    {
        if (isCustomColor)
        {
            if (useGradient)
            {
                bgKUIML = "<SKIN width=\"100%\" height=\"100%\">" + GetGradientCanvasKUIML() + "</SKIN>";
            }
            else
            {
                string hexColor = GetCustomColorHex();
                bgKUIML = "<SKIN width=\"100%\" height=\"100%\"><WIDGET width=\"100%\" height=\"100%\" background_color=\"" + hexColor + "\"/></SKIN>";
            }
        }
        else
        {
            bgKUIML = "<SKIN width=\"100%\" height=\"100%\"><IMAGE_GROUP_BOX image=\"$THEME_NAME$-Theme/decorations/" + bg_color + "/bg.png\" stretch=\"false\" width=\"100%\" height=\"100%\" ignore_mask_files=\"true\"/></SKIN>";
        }
        break;
    }
    }
    theme.decorations.background.innerKUIML=bgKUIML;
}

//string debugFilePath="$_DIR_$/debug.txt";

void GenerateExtraDataToTemp(const string& tempDir)
{
    if (tempDir.length > 0)
    {
        // write kuiml files for controls and background
        {
            string filePath = tempDir + "/Skins/custom_controls.kuiml.inc";
            file f;
            f.open(filePath, "w");
            f.writeString(controls_widget.innerKUIML);
            f.close();
        }
        {
            string filePath = tempDir + "/Skins/custom_bg.kuiml.inc";
            file f;
            f.open(filePath, "w");
            f.writeString(theme.decorations.background.innerKUIML);
            f.close();
        }
        // write constants file using current values
        {
            file f;
            string content;
            if(f.open("$_DIR_$/constants_skin_template.inc","r")>=0)
            {
                content=f.readString(f.getSize());
                f.close();
            }
            int value = uint($show_levels$);
            replaceString(content, "#display_levels#", formatUInt(value));
            value = uint(display_script_title);
            replaceString(content, "#display_script_title#", formatUInt(value));
            value = uint(display_status_bar);
            replaceString(content, "#display_status_bar#", formatUInt(value));
            value = uint(display_handles);
            replaceString(content, "#display_handles#", formatUInt(value));
            value = uint(display_screws);
            replaceString(content, "#display_screws#", formatUInt(value));
            value = uint(display_logo);
            replaceString(content, "#display_logo#", formatUInt(value));
            value = uint(gui_gen.background_style);
            replaceString(content, "#background_style_default#", formatUInt(value));
            {
                string filePath = tempDir + "/Skins/constants.inc";
                if(f.open(filePath,"w")>=0)
                {
                    f.writeString(content);
                    f.close();
                }
            }
        }
        // write pdf manual if any
        if($script_doc_path$.length>=4)
        {
            string srcPath=$script_doc_path$;
            if (srcPath.findLast(".pdf") == int(srcPath.length) - 4)
            {
                file srcFile;
                if (srcFile.open(srcPath, "r") >= 0)
                {
                    string destPath = tempDir + "/manual.pdf";
                    file destFile;
                    if (destFile.open(destPath, "w") >= 0)
                    {
                        while (!srcFile.isEndOfFile())
                        {
                            destFile.writeUInt(srcFile.readUInt(1), 1);
                        }
                        destFile.close();
                    }
                    srcFile.close();
                }
            }
        }
    }

}