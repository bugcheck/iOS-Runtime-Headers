/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UITextInputControllerDelegate>, <UITextInputDelegate>, <UITextInputTokenizer>, NSArray, NSDictionary, NSHashTable, NSLayoutManager, NSString, UIResponder<UITextInput>, UITextChecker, UITextInputTraits, UITextPosition, UITextRange, UIView, UIView<UITextInput>, UIView<UITextInputPrivate>, _UIDictationAttachment, _UITextInputControllerTokenizer, _UITextKitTextRange, _UITextServiceSession, _UITextUndoManager, _UITextUndoOperationTyping;

@interface UITextInputController : NSObject <UITextInput, UITextInputAdditions, UITextInput_Internal> {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    struct { 
        unsigned int delegateRespondsToTextInputShouldBeginEditing : 1; 
        unsigned int delegateRespondsToTextInputShouldChangeCharactersInRangeReplacementText : 1; 
        unsigned int delegateRespondsToTextInputDidChange : 1; 
        unsigned int delegateRespondsToTextInputDidChangeSelection : 1; 
        unsigned int delegateRespondsToTextInputWillChangeSelectionFromCharacterRangeToCharacterRange : 1; 
        unsigned int delegateRespondsToTextInputEditorDidChangeSelection : 1; 
        unsigned int delegateRespondsToTextInputPrepareAttributedTextForInsertion : 1; 
        unsigned int textOrSelectionChangeOriginatesWithKeyboard : 1; 
        unsigned int showingTextStyleOptions : 1; 
        unsigned int undoRedoInProgress : 1; 
        unsigned int textOrSelectionChangeOriginatesWithMarkedText : 1; 
        unsigned int nextSelectionChangeMustUpdate : 1; 
        unsigned int hasTextAlternatives : 1; 
        unsigned int suppressDelegateChangeNotifications : 1; 
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    _UITextServiceSession *_definitionSession;
    <UITextInputControllerDelegate> *_delegate;
    _UIDictationAttachment *_dictationPlaceholder;
    NSDictionary *_emptyStringAttributes;
    NSArray *_extraItemsBeforeTextStyleOptions;
    UIView<UITextInput> *_firstTextView;
    <UITextInputDelegate> *_inputDelegate;
    NSLayoutManager *_layoutManager;
    _UITextServiceSession *_learnSession;
    } _markedTextRange;
    } _markedTextSelection;
    NSHashTable *_observedScrollViews;
    } _previousSelectedRange;
    _UITextKitTextRange *_selectedTextRange;
    UITextChecker *_textChecker;
    UITextInputTraits *_textInputTraits;
    } _tiFlags;
    _UITextInputControllerTokenizer *_tokenizer;
    NSDictionary *_typingAttributes;
    _UITextUndoManager *_undoManager;
    _UITextUndoOperationTyping *_undoOperationForCoalescing;
    bool_allowsEditingTextAttributes;
    bool_continuousSpellCheckingEnabled;
}

@property(getter=_proxyTextInput,readonly) UIResponder<UITextInput> * __content;
@property(readonly) UIView<UITextInputPrivate> * _textSelectingContainer;
@property bool allowsEditingTextAttributes;
@property long long autocapitalizationType;
@property long long autocorrectionType;
@property(readonly) UITextPosition * beginningOfDocument;
@property(getter=_caretRect,readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } caretRect;
@property bool continuousSpellCheckingEnabled;
@property(copy,readonly) NSString * debugDescription;
@property <UITextInputControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(getter=isEditable,readonly) bool editable;
@property(getter=isEditing,readonly) bool editing;
@property(getter=_emptyStringAttributes,setter=_setEmptyStringAttributes:,copy) NSDictionary * emptyStringAttributes;
@property bool enablesReturnKeyAutomatically;
@property(readonly) UITextPosition * endOfDocument;
@property(readonly) unsigned long long hash;
@property <UITextInputDelegate> * inputDelegate;
@property long long keyboardAppearance;
@property long long keyboardType;
@property(retain) NSLayoutManager * layoutManager;
@property(readonly) UITextRange * markedTextRange;
@property(copy) NSDictionary * markedTextStyle;
@property struct _NSRange { unsigned long long x1; unsigned long long x2; } previousSelectedRange;
@property long long returnKeyType;
@property(getter=isSecureTextEntry) bool secureTextEntry;
@property struct _NSRange { unsigned long long x1; unsigned long long x2; } selectedRange;
@property(copy) UITextRange * selectedTextRange;
@property long long selectionAffinity;
@property long long spellCheckingType;
@property(readonly) Class superclass;
@property(readonly) UIView * textInputView;
@property(readonly) <UITextInputTokenizer> * tokenizer;
@property(copy) NSDictionary * typingAttributes;

- (void)_addShortcut:(id)arg1;
- (void)_addToTypingAttributes:(id)arg1 value:(id)arg2;
- (id)_attributesForReplacementInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)_canHandleResponderAction:(SEL)arg1;
- (void)_cancelDictationIfNecessaryForChangeInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_caretRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_caretRectForOffset:(unsigned long long)arg1;
- (unsigned int)_characterAfterCaretSelection;
- (unsigned int)_characterBeforeCaretSelection;
- (unsigned int)_characterInRelationToCaretSelection:(int)arg1;
- (unsigned int)_characterInRelationToRangedSelection:(int)arg1;
- (id)_characterPositionForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)_clampedpositionFromPosition:(id)arg1 offset:(int)arg2;
- (void)_clearSelectionUI;
- (void)_commonInitWithLayoutManager:(id)arg1;
- (void)_coordinateSelectionChange:(id)arg1;
- (void)_copySelectionToClipboard;
- (void)_define:(id)arg1;
- (bool)_delegateShouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 replacementText:(id)arg2;
- (void)_deleteBackwardAndNotify:(bool)arg1;
- (void)_deleteByWord;
- (void)_deleteForwardAndNotify:(bool)arg1;
- (void)_deleteToEndOfLine;
- (void)_deleteToStartOfLine;
- (id)_emptyStringAttributes;
- (void)_ensureSelectionValid;
- (void)_ensureSelectionVisible;
- (void)_expandSelectionToBackwardDeletionCluster;
- (void)_expandSelectionToStartOfWordBeforeCaretSelection;
- (void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)arg1;
- (void)_extendCurrentSelection:(int)arg1;
- (id)_filteredAttributedTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_findPleasingWordBoundaryFromPosition:(id)arg1;
- (id)_firstTextView;
- (id)_fixupTypingAttributeForAttributes:(id)arg1;
- (id)_fontForCaretSelection;
- (void)_forceUnmarkTextDueToEditing;
- (id)_fullRange;
- (id)_fullText;
- (bool)_hasDictationPlaceholder;
- (bool)_hasMarkedText;
- (bool)_hasMarkedTextOrRangedSelection;
- (int)_indexForTextPosition:(id)arg1;
- (void)_insertAttributedText:(id)arg1 fromKeyboard:(bool)arg2;
- (void)_insertAttributedTextWithoutClosingTyping:(id)arg1;
- (void)_insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2 replacingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 resultLength:(unsigned long long*)arg4;
- (void)_insertText:(id)arg1 fromKeyboard:(bool)arg2;
- (void)_invalidateEmptyStringAttributes;
- (void)_invalidateTypingAttributes;
- (bool)_isDisplayingReferenceLibraryViewController;
- (bool)_isDisplayingShortcutViewController;
- (bool)_isEmptySelection;
- (bool)_isSecureTextEntry;
- (id)_keyInput;
- (id)_layoutManager;
- (bool)_mightHaveSelection;
- (void)_moveCurrentSelection:(int)arg1;
- (id)_moveDown:(bool)arg1 withHistory:(id)arg2;
- (id)_moveLeft:(bool)arg1 withHistory:(id)arg2;
- (id)_moveRight:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfDocument:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfLine:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfParagraph:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfWord:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfDocument:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfLine:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfParagraph:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfWord:(bool)arg1 withHistory:(id)arg2;
- (id)_moveUp:(bool)arg1 withHistory:(id)arg2;
- (id)_newAttributedStringForInsertionOfText:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)_newPhraseBoundaryGestureRecognizer;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_nsrangeForTextRange:(id)arg1;
- (id)_parentScrollView;
- (void)_performWhileSuppressingDelegateNotifications:(id)arg1;
- (void)_phraseBoundaryGesture:(id)arg1;
- (id)_positionAtStartOfWords:(unsigned long long)arg1 beforePosition:(id)arg2;
- (id)_positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 withAffinityDownstream:(bool)arg4;
- (void)_promptForReplace:(id)arg1;
- (id)_proxyTextInput;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeForBackwardsDelete;
- (id)_rangeOfEnclosingWord:(id)arg1;
- (id)_rangeOfLineEnclosingPosition:(id)arg1;
- (id)_rangeOfParagraphEnclosingPosition:(id)arg1;
- (id)_rangeOfText:(id)arg1 endingAtPosition:(id)arg2;
- (id)_rectsForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_registerUndoOperationForReplacementWithActionName:(id)arg1 replacementText:(id)arg2;
- (void)_removeDefinitionController;
- (void)_removeShortcutController;
- (void)_replaceCurrentWordWithText:(id)arg1;
- (void)_resetShowingTextStyle:(id)arg1;
- (void)_scrollRectToVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (void)_selectAll;
- (id)_selectableText;
- (id)_selectedAttributedText;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_selectedNSRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_selectedRange;
- (id)_selectedText;
- (long long)_selectionAffinity;
- (bool)_selectionAtDocumentEnd;
- (bool)_selectionAtDocumentStart;
- (bool)_selectionAtWordStart;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectionClipRect;
- (void)_selectionDidScroll:(id)arg1;
- (void)_selectionGeometryChanged;
- (void)_sendDelegateChangeNotificationsForText:(bool)arg1 selection:(bool)arg2;
- (void)_sendDelegateWillChangeNotificationsForText:(bool)arg1 selection:(bool)arg2;
- (void)_setCaretSelectionAtEndOfSelection;
- (void)_setEmptyStringAttributes:(id)arg1;
- (void)_setGestureRecognizers;
- (id)_setHistory:(id)arg1 withExtending:(bool)arg2 withAnchor:(int)arg3 withAffinityDownstream:(bool)arg4;
- (void)_setInternalGestureRecognizers;
- (void)_setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_setSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_setSelectedTextRange:(id)arg1 withAffinityDownstream:(bool)arg2;
- (void)_setSelectedTextRange:(id)arg1;
- (id)_setSelectionRangeWithHistory:(id)arg1;
- (void)_setUndoRedoInProgress:(bool)arg1;
- (void)_setupTextContainerView:(id)arg1;
- (bool)_shouldConsiderTextViewForGeometry:(id)arg1;
- (bool)_shouldHandleResponderAction:(SEL)arg1;
- (bool)_shouldPerformUICalloutBarButtonReplaceAction:(SEL)arg1 forText:(id)arg2 checkAutocorrection:(bool)arg3;
- (void)_showTextStyleOptions:(id)arg1;
- (void)_teardownTextContainerView:(id)arg1;
- (id)_textColorForCaretSelection;
- (void)_textContainerDidChangeView:(id)arg1;
- (id)_textStorage;
- (void)_textStorageDidProcessEditing:(id)arg1;
- (void)_toggleFontTrait:(int)arg1;
- (void)_transliterateChinese:(id)arg1;
- (void)_undoManagerWillUndo:(id)arg1;
- (bool)_undoRedoInProgress;
- (void)_unmarkText;
- (void)_updateFirstTextView;
- (void)_updateSelectionWithTextRange:(id)arg1 withAffinityDownstream:(bool)arg2;
- (bool)_usesAsynchronousProtocol;
- (unsigned long long)_validCaretPositionFromCharacterIndex:(unsigned long long)arg1 downstream:(bool)arg2;
- (id)_whitelistedTypingAttributes;
- (id)_wordContainingCaretSelection;
- (void)addTextAlternativesDisplayStyleToRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)allowsEditingTextAttributes;
- (int)atomStyle;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (void)beginSelectionChange;
- (id)beginningOfDocument;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (void)changeWillBeUndone:(id)arg1;
- (id)characterRangeAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (void)checkSpellingForSelectionChangeIfNecessary;
- (void)checkSpellingForWordInRange:(id)arg1;
- (void)clearText;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)coalesceInTextView:(id)arg1 affectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (bool)continuousSpellCheckingEnabled;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)dealloc;
- (void)decreaseSize:(id)arg1;
- (id)delegate;
- (void)delegateWillChangeAttributedText:(id)arg1;
- (void)deleteBackward;
- (void)didEndEditing;
- (bool)drawsAsAtom;
- (id)endOfDocument;
- (void)endSelectionChange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstRectForRange:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForDictationResultPlaceholder:(id)arg1;
- (bool)hasText;
- (void)increaseSize:(id)arg1;
- (id)initWithLayoutManager:(id)arg1;
- (id)inputDelegate;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (id)insertDictationResultPlaceholder;
- (void)insertText:(id)arg1;
- (id)interactionAssistant;
- (bool)isCoalescing;
- (bool)isEditable;
- (bool)isEditing;
- (id)layoutManager;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })markedRange;
- (id)markedTextRange;
- (id)markedTextStyle;
- (id)metadataDictionariesForDictationResults;
- (id)methodSignatureForSelector:(SEL)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })nsRangeForTextRange:(id)arg1;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (void)paste:(id)arg1;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (void)preheatTextChecker;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })previousSelectedRange;
- (id)rangeWithTextAlternatives:(id*)arg1 atPosition:(id)arg2;
- (void)registerUndoOperationForType:(int)arg1 actionName:(id)arg2 affectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 replacementText:(id)arg4;
- (void)removeAlternativesForCurrentWord;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(bool)arg2;
- (void)removeSpellingMarkersForCurrentWord;
- (void)removeSpellingMarkersFromWordInRange:(id)arg1;
- (void)removeTextStylingFromString:(id)arg1;
- (void)replace:(id)arg1;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (bool)respondsToSelector:(SEL)arg1;
- (void)scrollRangeToVisible:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)select:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)selectAll;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedRange;
- (id)selectedTextRange;
- (long long)selectionAffinity;
- (id)selectionRectsForRange:(id)arg1;
- (id)selectionView;
- (void)setAllowsEditingTextAttributes:(bool)arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (void)setContinuousSpellCheckingEnabled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInputDelegate:(id)arg1;
- (void)setLayoutManager:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setMarkedTextStyle:(id)arg1;
- (void)setPreviousSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSelectedTextRange:(id)arg1;
- (void)setTypingAttributes:(id)arg1;
- (void)stopCoalescing;
- (id)textChecker;
- (id)textInRange:(id)arg1;
- (id)textRangeForNSRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2;
- (void)toggleBoldface:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (id)tokenizer;
- (id)typingAttributes;
- (void)undoDidChangeText;
- (id)undoManager;
- (void)undoWillChangeText;
- (void)unmarkText;
- (void)updateSelection;

@end
