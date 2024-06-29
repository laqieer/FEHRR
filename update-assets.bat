git submodule update --remote asset/json
python3 -m pip install pillow opencc
python3 asset/script/make_backgrounds.py
python3 asset/script/make_voices.py
python3 asset/script/make_heroes.py
python3 asset/script/make_faces.py
python3 asset/script/make_texts.py
python3 asset/script/make_maps.py
python3 glyph/glyph.py
pause
