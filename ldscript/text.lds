. = GetLang - 1;
.text.GetLangNew : {*(.text.GetLangNew)}
. = SetTextFontGlyphs - 1;
.text.SetTextFontGlyphsOld : {*(.text.SetTextFontGlyphsOld)}
. = GetStringTextLen - 1;
.text.GetStringTextLenOld : {*(.text.GetStringTextLenOld)}
. = GetCharTextLen - 1;
.text.GetCharTextLenOld : {*(.text.GetCharTextLenOld)}
. = GetStringLineEnd - 1;
.text.GetStringLineEndOld : {*(.text.GetStringLineEndOld)}
. = Text_DrawString - 1;
.text.Text_DrawStringOld : {*(.text.Text_DrawStringOld)}
. = Text_DrawNumber - 1;
.text.Text_DrawNumberOld : {*(.text.Text_DrawNumberOld)}
. = Text_DrawCharacter - 1;
.text.Text_DrawCharacterOld : {*(.text.Text_DrawCharacterOld)}
. = DrawTextGlyph - 1;
.text.DrawTextGlyphOld : {*(.text.DrawTextGlyphOld)}
. = DrawTextGlyphNoClear - 1;
.text.DrawTextGlyphNoClearOld : {*(.text.DrawTextGlyphNoClearOld)}
. = DrawSpriteTextGlyph - 1;
.text.DrawSpriteTextGlyphOld : {*(.text.DrawSpriteTextGlyphOld)}
. = SpriteText_DrawBackground - 1;
.text.SpriteText_DrawBackgroundOld : {*(.text.SpriteText_DrawBackgroundOld)}
