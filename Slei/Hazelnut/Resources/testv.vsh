
attribute vec4 a_position;
attribute vec2 a_texCoord;
attribute vec4 a_color;
					

varying vec4 v_fragmentColor;
varying vec2 v_texCoord;
varying vec2 v_texCoord2;


uniform sampler2D tex1;

void main()
{
    gl_Position = CC_MVPMatrix * a_position;
	v_fragmentColor = a_color;
	v_texCoord = a_texCoord;
    v_texCoord2 = v_texCoord;

}