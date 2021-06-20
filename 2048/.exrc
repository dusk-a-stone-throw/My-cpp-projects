if &cp | set nocp | endif
let s:cpo_save=&cpo
set cpo&vim
inoremap <silent> <SNR>47_AutoPairsReturn =AutoPairsReturn()
inoremap <silent> <Plug>CocRefresh =coc#_complete()
inoremap <Plug>TComment_9 :call tcomment#SetOption("count", 9)
inoremap <Plug>TComment_8 :call tcomment#SetOption("count", 8)
inoremap <Plug>TComment_7 :call tcomment#SetOption("count", 7)
inoremap <Plug>TComment_6 :call tcomment#SetOption("count", 6)
inoremap <Plug>TComment_5 :call tcomment#SetOption("count", 5)
inoremap <Plug>TComment_4 :call tcomment#SetOption("count", 4)
inoremap <Plug>TComment_3 :call tcomment#SetOption("count", 3)
inoremap <Plug>TComment_2 :call tcomment#SetOption("count", 2)
inoremap <Plug>TComment_1 :call tcomment#SetOption("count", 1)
inoremap <Plug>TComment_s :TCommentAs =&ft_
inoremap <Plug>TComment_n :TCommentAs =&ft 
inoremap <Plug>TComment_a :TCommentAs 
inoremap <Plug>TComment_b :TCommentBlock mode=#
inoremap <Plug>TComment_i v:TCommentInline mode=#
inoremap <Plug>TComment_r :TCommentRight
inoremap <Plug>TComment_  :TComment 
inoremap <Plug>TComment_p :norm! m`vip:TComment``
inoremap <Plug>TComment_ :TComment
inoremap <silent> <expr> <C-Space> coc#refresh()
map  :NERDTreeToggle
map  za  
nnoremap 	 :bn
xmap <nowait>  <Plug>(VM-Find-Subword-Under)
nmap <nowait>  <Plug>(VM-Find-Under)
noremap  :tabnew split
vmap <silent> 9 <Plug>TComment_9
nmap <silent> 9 <Plug>TComment_9
omap <silent> 9 <Plug>TComment_9
vmap <silent> 8 <Plug>TComment_8
nmap <silent> 8 <Plug>TComment_8
omap <silent> 8 <Plug>TComment_8
vmap <silent> 7 <Plug>TComment_7
nmap <silent> 7 <Plug>TComment_7
omap <silent> 7 <Plug>TComment_7
vmap <silent> 6 <Plug>TComment_6
nmap <silent> 6 <Plug>TComment_6
omap <silent> 6 <Plug>TComment_6
vmap <silent> 5 <Plug>TComment_5
nmap <silent> 5 <Plug>TComment_5
omap <silent> 5 <Plug>TComment_5
vmap <silent> 4 <Plug>TComment_4
nmap <silent> 4 <Plug>TComment_4
omap <silent> 4 <Plug>TComment_4
vmap <silent> 3 <Plug>TComment_3
nmap <silent> 3 <Plug>TComment_3
omap <silent> 3 <Plug>TComment_3
vmap <silent> 2 <Plug>TComment_2
nmap <silent> 2 <Plug>TComment_2
omap <silent> 2 <Plug>TComment_2
vmap <silent> 1 <Plug>TComment_1
nmap <silent> 1 <Plug>TComment_1
omap <silent> 1 <Plug>TComment_1
map <silent> ca <Plug>TComment_ca
map <silent> cc <Plug>TComment_cc
map <silent> s <Plug>TComment_s
map <silent> n <Plug>TComment_n
map <silent> a <Plug>TComment_a
map <silent> b <Plug>TComment_b
map <silent> i <Plug>TComment_i
map <silent> r <Plug>TComment_r
map <silent>   <Plug>TComment_ 
map <silent> p <Plug>TComment_p
vmap <silent>  <Plug>TComment_
nmap <silent>  <Plug>TComment_
omap <silent>  <Plug>TComment_
nnoremap <silent>  p :CocListResume
nnoremap <silent>  k :CocPrev
nnoremap <silent>  j :CocNext
nnoremap <silent>  s :CocList -I symbols
nnoremap <silent>  o :CocList outline
nnoremap <silent>  c :CocList commands
nnoremap <silent>  e :CocList extensions
nnoremap <silent>  a :CocList diagnostics
nmap <silent> [c <Plug>(coc-diagnostic-prev)
xmap <nowait> \\c <Plug>(VM-Visual-Cursors)
nmap <nowait> \\gS <Plug>(VM-Reselect-Last)
nmap <nowait> \\/ <Plug>(VM-Start-Regex-Search)
nmap <nowait> \\\ <Plug>(VM-Add-Cursor-At-Pos)
xmap <nowait> \\a <Plug>(VM-Visual-Add)
xmap <nowait> \\f <Plug>(VM-Visual-Find)
xmap <nowait> \\/ <Plug>(VM-Visual-Regex)
xmap <nowait> \\A <Plug>(VM-Visual-All)
nmap <nowait> \\A <Plug>(VM-Select-All)
map <silent> \_s <Plug>TComment_\_s
map <silent> \_n <Plug>TComment_\_n
map <silent> \_a <Plug>TComment_\_a
map <silent> \_b <Plug>TComment_\_b
map <silent> \_r <Plug>TComment_\_r
xmap <silent> \_i <Plug>TComment_\_i
map <silent> \_  <Plug>TComment_\_ 
map <silent> \_p <Plug>TComment_\_p
xmap <silent> \__ <Plug>TComment_\__
nmap <silent> \__ <Plug>TComment_\__
smap <silent> \__ <Plug>TComment_\__
omap <silent> \__ <Plug>TComment_\__
nmap \qf <Plug>(coc-fix-current)
nmap \ac <Plug>(coc-codeaction)
nmap \a <Plug>(coc-codeaction-selected)
xmap \a <Plug>(coc-codeaction-selected)
nmap \f <Plug>(coc-format-selected)
xmap \f <Plug>(coc-format-selected)
noremap \<S-Tab> :Bw!
noremap \	 :Bw
nmap <silent> ]c <Plug>(coc-diagnostic-next)
vmap gx <Plug>NetrwBrowseXVis
nmap gx <Plug>NetrwBrowseX
xmap <silent> g> <Plug>TComment_Comment
nmap <silent> g>b <Plug>TComment_Commentb
nmap <silent> g>c <Plug>TComment_Commentc
nmap <silent> g> <Plug>TComment_Comment
xmap <silent> g< <Plug>TComment_Uncomment
nmap <silent> g<b <Plug>TComment_Uncommentb
nmap <silent> g<c <Plug>TComment_Uncommentc
nmap <silent> g< <Plug>TComment_Uncomment
xmap <silent> gc <Plug>TComment_gc
nmap <silent> gcb <Plug>TComment_gcb
nmap <silent> gcc <Plug>TComment_gcc
nmap <silent> gc9c <Plug>TComment_gc9c
nmap <silent> gc9 <Plug>TComment_gc9
nmap <silent> gc8c <Plug>TComment_gc8c
nmap <silent> gc8 <Plug>TComment_gc8
nmap <silent> gc7c <Plug>TComment_gc7c
nmap <silent> gc7 <Plug>TComment_gc7
nmap <silent> gc6c <Plug>TComment_gc6c
nmap <silent> gc6 <Plug>TComment_gc6
nmap <silent> gc5c <Plug>TComment_gc5c
nmap <silent> gc5 <Plug>TComment_gc5
nmap <silent> gc4c <Plug>TComment_gc4c
nmap <silent> gc4 <Plug>TComment_gc4
nmap <silent> gc3c <Plug>TComment_gc3c
nmap <silent> gc3 <Plug>TComment_gc3
nmap <silent> gc2c <Plug>TComment_gc2c
nmap <silent> gc2 <Plug>TComment_gc2
nmap <silent> gc1c <Plug>TComment_gc1c
nmap <silent> gc1 <Plug>TComment_gc1
nmap <silent> gc <Plug>TComment_gc
nmap <silent> gr <Plug>(coc-references)
nmap <silent> gi <Plug>(coc-implementation)
nmap <silent> gy <Plug>(coc-type-definition)
nmap <silent> gd <Plug>(coc-definition)
omap <silent> ic <Plug>TComment_ic
vmap <silent> ic <Plug>TComment_ic
vnoremap <silent> <Plug>NetrwBrowseXVis :call netrw#BrowseXVis()
nnoremap <silent> <Plug>NetrwBrowseX :call netrw#BrowseX(expand((exists("g:netrw_gx")? g:netrw_gx : '<cfile>')),netrw#CheckIfRemote())
nmap <nowait> <S-Right> <Plug>(VM-Select-l)
nmap <nowait> <S-Left> <Plug>(VM-Select-h)
nnoremap <silent> <Plug>(VM-Select-BBW) :call vm#commands#motion('BBW', v:count1, 1, 0)
nnoremap <silent> <Plug>(VM-Select-gE) :call vm#commands#motion('gE', v:count1, 1, 0)
nnoremap <silent> <Plug>(VM-Select-ge) :call vm#commands#motion('ge', v:count1, 1, 0)
nnoremap <silent> <Plug>(VM-Select-E) :call vm#commands#motion('E', v:count1, 1, 0)
nnoremap <silent> <Plug>(VM-Select-e) :call vm#commands#motion('e', v:count1, 1, 0)
nnoremap <silent> <Plug>(VM-Select-B) :call vm#commands#motion('B', v:count1, 1, 0)
nnoremap <silent> <Plug>(VM-Select-b) :call vm#commands#motion('b', v:count1, 1, 0)
nnoremap <silent> <Plug>(VM-Select-W) :call vm#commands#motion('W', v:count1, 1, 0)
nnoremap <silent> <Plug>(VM-Select-w) :call vm#commands#motion('w', v:count1, 1, 0)
nnoremap <silent> <Plug>(VM-Select-l) :call vm#commands#motion('l', v:count1, 1, 0)
nnoremap <silent> <Plug>(VM-Select-k) :call vm#commands#motion('k', v:count1, 1, 0)
nnoremap <silent> <Plug>(VM-Select-j) :call vm#commands#motion('j', v:count1, 1, 0)
nnoremap <silent> <Plug>(VM-Select-h) :call vm#commands#motion('h', v:count1, 1, 0)
nnoremap <silent> <Plug>(VM-Mouse-Column) :call vm#commands#mouse_column()
nmap <silent> <Plug>(VM-Mouse-Word) <Plug>(VM-Left-Mouse)<Plug>(VM-Find-Under)
nmap <silent> <Plug>(VM-Mouse-Cursor) <Plug>(VM-Left-Mouse)<Plug>(VM-Add-Cursor-At-Pos)
nnoremap <silent> <Plug>(VM-Left-Mouse) <LeftMouse>
xnoremap <silent> <Plug>(VM-Visual-Regex) :call vm#commands#find_by_regex(2):call feedkeys('/', 'n')
nnoremap <silent> <Plug>(VM-Slash-Search) @=vm#commands#find_by_regex(3)
nnoremap <silent> <Plug>(VM-Start-Regex-Search) @=vm#commands#find_by_regex(1)
nnoremap <silent> <Plug>(VM-Find-Under) :call vm#commands#ctrln(v:count1)
xnoremap <silent> <Plug>(VM-Visual-Reduce) :call vm#visual#reduce()
xnoremap <silent> <Plug>(VM-Visual-Add) :call vm#commands#visual_add()
xnoremap <silent> <Plug>(VM-Visual-Cursors) :call vm#commands#visual_cursors()
nnoremap <silent> <Plug>(VM-Select-All) :call vm#commands#find_all(0, 1)
nnoremap <silent> <Plug>(VM-Reselect-Last) :call vm#commands#reselect_last()
nnoremap <silent> <Plug>(VM-Select-Cursor-Up) :call vm#commands#add_cursor_up(1, v:count1)
nnoremap <silent> <Plug>(VM-Select-Cursor-Down) :call vm#commands#add_cursor_down(1, v:count1)
nnoremap <silent> <Plug>(VM-Add-Cursor-Up) :call vm#commands#add_cursor_up(0, v:count1)
nnoremap <silent> <Plug>(VM-Add-Cursor-Down) :call vm#commands#add_cursor_down(0, v:count1)
nnoremap <silent> <Plug>(VM-Add-Cursor-At-Word) :call vm#commands#add_cursor_at_word(1, 1)
nnoremap <silent> <Plug>(VM-Add-Cursor-At-Pos) :call vm#commands#add_cursor_at_pos(0)
xmap <silent> <expr> <Plug>(VM-Visual-Find) vm#operators#find(1, 1)
noremap <silent> <Plug>BuffetSwitch(10) :call buffet#bswitch(10)
noremap <silent> <Plug>BuffetSwitch(9) :call buffet#bswitch(9)
noremap <silent> <Plug>BuffetSwitch(8) :call buffet#bswitch(8)
noremap <silent> <Plug>BuffetSwitch(7) :call buffet#bswitch(7)
noremap <silent> <Plug>BuffetSwitch(6) :call buffet#bswitch(6)
noremap <silent> <Plug>BuffetSwitch(5) :call buffet#bswitch(5)
noremap <silent> <Plug>BuffetSwitch(4) :call buffet#bswitch(4)
noremap <silent> <Plug>BuffetSwitch(3) :call buffet#bswitch(3)
noremap <silent> <Plug>BuffetSwitch(2) :call buffet#bswitch(2)
noremap <silent> <Plug>BuffetSwitch(1) :call buffet#bswitch(1)
nnoremap <silent> <Plug>GitGutterPreviewHunk :call gitgutter#utility#warn('Please change your map <Plug>GitGutterPreviewHunk to <Plug>(GitGutterPreviewHunk)')
nnoremap <silent> <Plug>(GitGutterPreviewHunk) :GitGutterPreviewHunk
nnoremap <silent> <Plug>GitGutterUndoHunk :call gitgutter#utility#warn('Please change your map <Plug>GitGutterUndoHunk to <Plug>(GitGutterUndoHunk)')
nnoremap <silent> <Plug>(GitGutterUndoHunk) :GitGutterUndoHunk
nnoremap <silent> <Plug>GitGutterStageHunk :call gitgutter#utility#warn('Please change your map <Plug>GitGutterStageHunk to <Plug>(GitGutterStageHunk)')
nnoremap <silent> <Plug>(GitGutterStageHunk) :GitGutterStageHunk
xnoremap <silent> <Plug>GitGutterStageHunk :call gitgutter#utility#warn('Please change your map <Plug>GitGutterStageHunk to <Plug>(GitGutterStageHunk)')
xnoremap <silent> <Plug>(GitGutterStageHunk) :GitGutterStageHunk
nnoremap <silent> <expr> <Plug>GitGutterPrevHunk &diff ? '[c' : ":\call gitgutter#utility#warn('Please change your map \<Plug>GitGutterPrevHunk to \<Plug>(GitGutterPrevHunk)')\"
nnoremap <silent> <expr> <Plug>(GitGutterPrevHunk) &diff ? '[c' : ":\execute v:count1 . 'GitGutterPrevHunk'\"
nnoremap <silent> <expr> <Plug>GitGutterNextHunk &diff ? ']c' : ":\call gitgutter#utility#warn('Please change your map \<Plug>GitGutterNextHunk to \<Plug>(GitGutterNextHunk)')\"
nnoremap <silent> <expr> <Plug>(GitGutterNextHunk) &diff ? ']c' : ":\execute v:count1 . 'GitGutterNextHunk'\"
xnoremap <silent> <Plug>(GitGutterTextObjectOuterVisual) :call gitgutter#hunk#text_object(0)
xnoremap <silent> <Plug>(GitGutterTextObjectInnerVisual) :call gitgutter#hunk#text_object(1)
onoremap <silent> <Plug>(GitGutterTextObjectOuterPending) :call gitgutter#hunk#text_object(0)
onoremap <silent> <Plug>(GitGutterTextObjectInnerPending) :call gitgutter#hunk#text_object(1)
noremap <silent> <Plug>lightline#bufferline#delete(10) :call lightline#bufferline#delete(10)
noremap <silent> <Plug>lightline#bufferline#delete(9) :call lightline#bufferline#delete(9)
noremap <silent> <Plug>lightline#bufferline#delete(8) :call lightline#bufferline#delete(8)
noremap <silent> <Plug>lightline#bufferline#delete(7) :call lightline#bufferline#delete(7)
noremap <silent> <Plug>lightline#bufferline#delete(6) :call lightline#bufferline#delete(6)
noremap <silent> <Plug>lightline#bufferline#delete(5) :call lightline#bufferline#delete(5)
noremap <silent> <Plug>lightline#bufferline#delete(4) :call lightline#bufferline#delete(4)
noremap <silent> <Plug>lightline#bufferline#delete(3) :call lightline#bufferline#delete(3)
noremap <silent> <Plug>lightline#bufferline#delete(2) :call lightline#bufferline#delete(2)
noremap <silent> <Plug>lightline#bufferline#delete(1) :call lightline#bufferline#delete(1)
noremap <silent> <Plug>lightline#bufferline#go(10) :call lightline#bufferline#go(10)
noremap <silent> <Plug>lightline#bufferline#go(9) :call lightline#bufferline#go(9)
noremap <silent> <Plug>lightline#bufferline#go(8) :call lightline#bufferline#go(8)
noremap <silent> <Plug>lightline#bufferline#go(7) :call lightline#bufferline#go(7)
noremap <silent> <Plug>lightline#bufferline#go(6) :call lightline#bufferline#go(6)
noremap <silent> <Plug>lightline#bufferline#go(5) :call lightline#bufferline#go(5)
noremap <silent> <Plug>lightline#bufferline#go(4) :call lightline#bufferline#go(4)
noremap <silent> <Plug>lightline#bufferline#go(3) :call lightline#bufferline#go(3)
noremap <silent> <Plug>lightline#bufferline#go(2) :call lightline#bufferline#go(2)
noremap <silent> <Plug>lightline#bufferline#go(1) :call lightline#bufferline#go(1)
onoremap <silent> <Plug>(coc-classobj-a) :call coc#rpc#request('selectSymbolRange', [v:false, '', ['Interface', 'Struct', 'Class']])
onoremap <silent> <Plug>(coc-classobj-i) :call coc#rpc#request('selectSymbolRange', [v:true, '', ['Interface', 'Struct', 'Class']])
vnoremap <silent> <Plug>(coc-classobj-a) :call coc#rpc#request('selectSymbolRange', [v:false, visualmode(), ['Interface', 'Struct', 'Class']])
vnoremap <silent> <Plug>(coc-classobj-i) :call coc#rpc#request('selectSymbolRange', [v:true, visualmode(), ['Interface', 'Struct', 'Class']])
onoremap <silent> <Plug>(coc-funcobj-a) :call coc#rpc#request('selectSymbolRange', [v:false, '', ['Method', 'Function']])
onoremap <silent> <Plug>(coc-funcobj-i) :call coc#rpc#request('selectSymbolRange', [v:true, '', ['Method', 'Function']])
vnoremap <silent> <Plug>(coc-funcobj-a) :call coc#rpc#request('selectSymbolRange', [v:false, visualmode(), ['Method', 'Function']])
vnoremap <silent> <Plug>(coc-funcobj-i) :call coc#rpc#request('selectSymbolRange', [v:true, visualmode(), ['Method', 'Function']])
nnoremap <silent> <Plug>(coc-cursors-position) :call coc#rpc#request('cursorsSelect', [bufnr('%'), 'position', 'n'])
nnoremap <silent> <Plug>(coc-cursors-word) :call coc#rpc#request('cursorsSelect', [bufnr('%'), 'word', 'n'])
vnoremap <silent> <Plug>(coc-cursors-range) :call coc#rpc#request('cursorsSelect', [bufnr('%'), 'range', visualmode()])
nnoremap <silent> <Plug>(coc-refactor) :call       CocActionAsync('refactor')
nnoremap <silent> <Plug>(coc-command-repeat) :call       CocAction('repeatCommand')
nnoremap <silent> <Plug>(coc-float-jump) :call       coc#float#jump()
nnoremap <silent> <Plug>(coc-float-hide) :call       coc#float#close_all()
nnoremap <silent> <Plug>(coc-fix-current) :call       CocActionAsync('doQuickfix')
nnoremap <silent> <Plug>(coc-openlink) :call       CocActionAsync('openLink')
nnoremap <silent> <Plug>(coc-references-used) :call       CocActionAsync('jumpUsed')
nnoremap <silent> <Plug>(coc-references) :call       CocActionAsync('jumpReferences')
nnoremap <silent> <Plug>(coc-type-definition) :call       CocActionAsync('jumpTypeDefinition')
nnoremap <silent> <Plug>(coc-implementation) :call       CocActionAsync('jumpImplementation')
nnoremap <silent> <Plug>(coc-declaration) :call       CocActionAsync('jumpDeclaration')
nnoremap <silent> <Plug>(coc-definition) :call       CocActionAsync('jumpDefinition')
nnoremap <silent> <Plug>(coc-diagnostic-prev-error) :call       CocActionAsync('diagnosticPrevious', 'error')
nnoremap <silent> <Plug>(coc-diagnostic-next-error) :call       CocActionAsync('diagnosticNext',     'error')
nnoremap <silent> <Plug>(coc-diagnostic-prev) :call       CocActionAsync('diagnosticPrevious')
nnoremap <silent> <Plug>(coc-diagnostic-next) :call       CocActionAsync('diagnosticNext')
nnoremap <silent> <Plug>(coc-diagnostic-info) :call       CocActionAsync('diagnosticInfo')
nnoremap <silent> <Plug>(coc-format) :call       CocActionAsync('format')
nnoremap <silent> <Plug>(coc-rename) :call       CocActionAsync('rename')
nnoremap <Plug>(coc-codeaction-cursor) :call       CocActionAsync('codeAction',         'cursor')
nnoremap <Plug>(coc-codeaction-line) :call       CocActionAsync('codeAction',         'line')
nnoremap <Plug>(coc-codeaction) :call       CocActionAsync('codeAction',         '')
vnoremap <silent> <Plug>(coc-codeaction-selected) :call       CocActionAsync('codeAction',         visualmode())
vnoremap <silent> <Plug>(coc-format-selected) :call       CocActionAsync('formatSelected',     visualmode())
nnoremap <Plug>(coc-codelens-action) :call       CocActionAsync('codeLensAction')
nnoremap <Plug>(coc-range-select) :call       CocActionAsync('rangeSelect',     '', v:true)
vnoremap <silent> <Plug>(coc-range-select-backward) :call       CocActionAsync('rangeSelect',     visualmode(), v:false)
vnoremap <silent> <Plug>(coc-range-select) :call       CocActionAsync('rangeSelect',     visualmode(), v:true)
nnoremap <silent> <Plug>(startify-open-buffers) :call startify#open_buffers()
nnoremap <Plug>TComment_gc9c :call tcomment#ResetOption() | if v:count > 0 | call tcomment#SetOption("count", v:count) | endif | let w:tcommentPos = getpos(".") |set opfunc=TCommentOpFunc_gc9cg@
nnoremap <Plug>TComment_gc8c :call tcomment#ResetOption() | if v:count > 0 | call tcomment#SetOption("count", v:count) | endif | let w:tcommentPos = getpos(".") |set opfunc=TCommentOpFunc_gc8cg@
nnoremap <Plug>TComment_gc7c :call tcomment#ResetOption() | if v:count > 0 | call tcomment#SetOption("count", v:count) | endif | let w:tcommentPos = getpos(".") |set opfunc=TCommentOpFunc_gc7cg@
nnoremap <Plug>TComment_gc6c :call tcomment#ResetOption() | if v:count > 0 | call tcomment#SetOption("count", v:count) | endif | let w:tcommentPos = getpos(".") |set opfunc=TCommentOpFunc_gc6cg@
nnoremap <Plug>TComment_gc5c :call tcomment#ResetOption() | if v:count > 0 | call tcomment#SetOption("count", v:count) | endif | let w:tcommentPos = getpos(".") |set opfunc=TCommentOpFunc_gc5cg@
nnoremap <Plug>TComment_gc4c :call tcomment#ResetOption() | if v:count > 0 | call tcomment#SetOption("count", v:count) | endif | let w:tcommentPos = getpos(".") |set opfunc=TCommentOpFunc_gc4cg@
nnoremap <Plug>TComment_gc3c :call tcomment#ResetOption() | if v:count > 0 | call tcomment#SetOption("count", v:count) | endif | let w:tcommentPos = getpos(".") |set opfunc=TCommentOpFunc_gc3cg@
nnoremap <Plug>TComment_gc2c :call tcomment#ResetOption() | if v:count > 0 | call tcomment#SetOption("count", v:count) | endif | let w:tcommentPos = getpos(".") |set opfunc=TCommentOpFunc_gc2cg@
nnoremap <Plug>TComment_gc1c :call tcomment#ResetOption() | if v:count > 0 | call tcomment#SetOption("count", v:count) | endif | let w:tcommentPos = getpos(".") |set opfunc=TCommentOpFunc_gc1cg@
vnoremap <Plug>TComment_9 :call tcomment#SetOption("count", 9)
nnoremap <Plug>TComment_9 :call tcomment#SetOption("count", 9)
onoremap <Plug>TComment_9 :call tcomment#SetOption("count", 9)
vnoremap <Plug>TComment_8 :call tcomment#SetOption("count", 8)
nnoremap <Plug>TComment_8 :call tcomment#SetOption("count", 8)
onoremap <Plug>TComment_8 :call tcomment#SetOption("count", 8)
vnoremap <Plug>TComment_7 :call tcomment#SetOption("count", 7)
nnoremap <Plug>TComment_7 :call tcomment#SetOption("count", 7)
onoremap <Plug>TComment_7 :call tcomment#SetOption("count", 7)
vnoremap <Plug>TComment_6 :call tcomment#SetOption("count", 6)
nnoremap <Plug>TComment_6 :call tcomment#SetOption("count", 6)
onoremap <Plug>TComment_6 :call tcomment#SetOption("count", 6)
vnoremap <Plug>TComment_5 :call tcomment#SetOption("count", 5)
nnoremap <Plug>TComment_5 :call tcomment#SetOption("count", 5)
onoremap <Plug>TComment_5 :call tcomment#SetOption("count", 5)
vnoremap <Plug>TComment_4 :call tcomment#SetOption("count", 4)
nnoremap <Plug>TComment_4 :call tcomment#SetOption("count", 4)
onoremap <Plug>TComment_4 :call tcomment#SetOption("count", 4)
vnoremap <Plug>TComment_3 :call tcomment#SetOption("count", 3)
nnoremap <Plug>TComment_3 :call tcomment#SetOption("count", 3)
onoremap <Plug>TComment_3 :call tcomment#SetOption("count", 3)
vnoremap <Plug>TComment_2 :call tcomment#SetOption("count", 2)
nnoremap <Plug>TComment_2 :call tcomment#SetOption("count", 2)
onoremap <Plug>TComment_2 :call tcomment#SetOption("count", 2)
vnoremap <Plug>TComment_1 :call tcomment#SetOption("count", 1)
nnoremap <Plug>TComment_1 :call tcomment#SetOption("count", 1)
onoremap <Plug>TComment_1 :call tcomment#SetOption("count", 1)
nnoremap <Plug>TComment_gC :call tcomment#ResetOption() | if v:count > 0 | call tcomment#SetOption("count", v:count) | endif | let w:tcommentPos = getpos(".") |set opfunc=TCommentOpFunc_gCg@
nnoremap <Plug>TComment_gc :call tcomment#ResetOption() | if v:count > 0 | call tcomment#SetOption("count", v:count) | endif | let w:tcommentPos = getpos(".") |set opfunc=TCommentOpFunc_gcg@
xnoremap <Plug>TComment_gc :TCommentMaybeInline
nnoremap <Plug>TComment_gcb :call tcomment#ResetOption() | if v:count > 0 | call tcomment#SetOption("count", v:count) | endif | let w:tcommentPos = getpos(".") |set opfunc=TCommentOpFunc_gcbg@
nnoremap <Plug>TComment_gcc :call tcomment#ResetOption() | if v:count > 0 | call tcomment#SetOption("count", v:count) | endif | let w:tcommentPos = getpos(".") |set opfunc=TCommentOpFunc_gccg@$
noremap <Plug>TComment_ic :call tcomment#textobject#InlineComment()
xnoremap <Plug>TComment_Comment :if v:count > 0 | call tcomment#SetOption("count", v:count) | endif | '<,'>TCommentMaybeInline!
nnoremap <Plug>TComment_Commentb :call tcomment#ResetOption() | if v:count > 0 | call tcomment#SetOption("count", v:count) | endif | let w:tcommentPos = getpos(".") |set opfunc=TCommentOpFunc_Commentbg@
nnoremap <Plug>TComment_Commentc :call tcomment#ResetOption() | if v:count > 0 | call tcomment#SetOption("count", v:count) | endif | let w:tcommentPos = getpos(".") |set opfunc=TCommentOpFunc_Commentcg@$
nnoremap <Plug>TComment_Commentl :call tcomment#ResetOption() | if v:count > 0 | call tcomment#SetOption("count", v:count) | endif | let w:tcommentPos = getpos(".") |set opfunc=TCommentOpFunc_Commentlg@$
nnoremap <Plug>TComment_Comment :call tcomment#ResetOption() | if v:count > 0 | call tcomment#SetOption("count", v:count) | endif | let w:tcommentPos = getpos(".") |set opfunc=TCommentOpFunc_Commentg@
xnoremap <Plug>TComment_Uncomment :if v:count > 0 | call tcomment#SetOption("count", v:count) | endif | call tcomment#SetOption("mode_extra", "U") | '<,'>TCommentMaybeInline
nnoremap <Plug>TComment_Uncommentb :call tcomment#ResetOption() | if v:count > 0 | call tcomment#SetOption("count", v:count) | endif | let w:tcommentPos = getpos(".") |set opfunc=TCommentOpFunc_Uncommentbg@
nnoremap <Plug>TComment_Uncommentc :call tcomment#ResetOption() | if v:count > 0 | call tcomment#SetOption("count", v:count) | endif | let w:tcommentPos = getpos(".") |set opfunc=TCommentOpFunc_Uncommentcg@$
nnoremap <Plug>TComment_Uncomment :call tcomment#ResetOption() | if v:count > 0 | call tcomment#SetOption("count", v:count) | endif | let w:tcommentPos = getpos(".") |set opfunc=TCommentOpFunc_Uncommentg@
noremap <Plug>TComment_\_s :TCommentAs =&ft_
noremap <Plug>TComment_\_n :TCommentAs =&ft 
noremap <Plug>TComment_\_a :TCommentAs 
noremap <Plug>TComment_\_b :TCommentBlock
noremap <Plug>TComment_\_r :TCommentRight
xnoremap <Plug>TComment_\_i :TCommentInline
noremap <Plug>TComment_\_  :TComment 
noremap <Plug>TComment_\_p vip:TComment
xnoremap <Plug>TComment_\__ :TCommentMaybeInline
nnoremap <Plug>TComment_\__ :TComment
snoremap <Plug>TComment_\__ :TComment
onoremap <Plug>TComment_\__ :TComment
noremap <Plug>TComment_ca :call tcomment#SetOption("as", input("Comment as: ", &filetype, "customlist,tcomment#complete#Complete"))
noremap <Plug>TComment_cc :call tcomment#SetOption("count", v:count1)
noremap <Plug>TComment_s :TCommentAs =&ft_
noremap <Plug>TComment_n :TCommentAs =&ft 
noremap <Plug>TComment_a :TCommentAs 
noremap <Plug>TComment_b :TCommentBlock
noremap <Plug>TComment_i v:TCommentInline mode=I#
noremap <Plug>TComment_r :TCommentRight
noremap <Plug>TComment_  :TComment 
noremap <Plug>TComment_p m`vip:TComment``
vnoremap <Plug>TComment_ :TCommentMaybeInline
nnoremap <Plug>TComment_ :TComment
onoremap <Plug>TComment_ :TComment
noremap <S-Tab> :bp
nmap <nowait> <C-Up> <Plug>(VM-Add-Cursor-Up)
nmap <nowait> <C-Down> <Plug>(VM-Add-Cursor-Down)
vmap <C-Up> <Plug>MoveBlockUp
vmap <C-Down> <Plug>MoveBlockDown
map <F5> :w  :!clear  :!./%:r
map <F8> :w  :!clear  :!g++ % -o %:r  
map <F9> :w  :!clear  :!g++ % -o %:r && ./%:r 
inoremap <expr>  pumvisible() ? "\" : "\u\"
imap <silent> 9 <Plug>TComment_9
imap <silent> 8 <Plug>TComment_8
imap <silent> 7 <Plug>TComment_7
imap <silent> 6 <Plug>TComment_6
imap <silent> 5 <Plug>TComment_5
imap <silent> 4 <Plug>TComment_4
imap <silent> 3 <Plug>TComment_3
imap <silent> 2 <Plug>TComment_2
imap <silent> 1 <Plug>TComment_1
imap <silent> s <Plug>TComment_s
imap <silent> n <Plug>TComment_n
imap <silent> a <Plug>TComment_a
imap <silent> b <Plug>TComment_b
imap <silent> i <Plug>TComment_i
imap <silent> r <Plug>TComment_r
imap <silent>   <Plug>TComment_ 
imap <silent> p <Plug>TComment_p
imap <silent>  <Plug>TComment_
let &cpo=s:cpo_save
unlet s:cpo_save
set autoindent
set background=dark
set backspace=indent,eol,start
set cindent
set cmdheight=2
set diffexpr=MyDiff()
set expandtab
set fileencodings=ucs-bom,utf-8,default,latin1
set guicursor=n-v-c:block-Cursor/lCursor,ve:ver35-Cursor,o:hor50-Cursor,i-ci:ver25-Cursor/lCursor,r-cr:hor20-Cursor/lCursor,sm:block-Cursor-blinkwait175-blinkoff150-blinkon175,a:blinkon0
set guifont=Consolas:h14
set guioptions=agimrLtT
set helplang=ru
set hidden
set hlsearch
set ignorecase
set incsearch
set laststatus=2
set listchars=tab:>·,trail:·,extends:>,precedes:<,space:·
set mouse=a
set runtimepath=~/.vim,~/.vim/plugged/lightline.vim,~/.vim/plugged/vim-gitbranch,~/.vim/plugged/nerdtree,~/.vim/plugged/rainbow,~/.vim/plugged/tcomment_vim,~/.vim/plugged/vim-move,~/.vim/plugged/vim-css-color,~/.vim/plugged/vim-startify,~/.vim/plugged/coc.nvim,~/.vim/plugged/vim-cpp-modern,~/.vim/plugged/vim-devicons,~/.vim/plugged/vim-togglecursor,~/.vim/plugged/auto-pairs,~/.vim/plugged/lightline-onedark,~/.vim/plugged/lightline-bufferline,~/.vim/plugged/vim-gitgutter,~/.vim/plugged/vim-buffet,~/.vim/plugged/vim-foldtext,~/.vim/plugged/vim-nerdtree-syntax-highlight,~/.vim/plugged/vim-visual-multi,/usr/share/vim/vimfiles,/usr/share/vim/vim80,/usr/share/vim/vimfiles/after,~/.vim/plugged/vim-css-color/after,~/.vim/plugged/vim-cpp-modern/after,~/.vim/plugged/vim-nerdtree-syntax-highlight/after,~/.vim/after
set scrolloff=999
set shellcmdflag=-ic
set shiftwidth=4
set shortmess=filnxtToOcI
set showmatch
set noshowmode
set showtabline=2
set smartcase
set smartindent
set smarttab
set statusline=%{coc#status()}%{get(b:,'coc_current_function','')}%#warningmsg#%{SyntasticStatuslineFlag()}%*
set tabline=%!lightline#tabline()
set tabstop=4
set undolevels=2048
set updatetime=300
set viminfo=%,'100,<50,s10,h
set nowritebackup
" vim: set ft=vim :
