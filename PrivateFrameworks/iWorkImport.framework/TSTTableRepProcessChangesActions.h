/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTableRepProcessChangesActions : NSObject {
    struct { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    struct { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    bool_hideChromeContextMenuButton;
    bool_hideStepperHUD;
    bool_invalidateAllChrome;
    bool_invalidateColumnChrome;
    bool_invalidateKnobs;
    bool_invalidateRowChrome;
    bool_invalidateSelection;
    bool_invalidateTableName;
    bool_setNeedsDisplay;
    bool_syncReferenceHighlightState;
    bool_updateEditorRemainders;
    } dirtyCellRange;
    } dirtyStrokeRange;
}

@property struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; } dirtyCellRange;
@property struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; } dirtyStrokeRange;
@property bool hideChromeContextMenuButton;
@property bool hideStepperHUD;
@property bool invalidateAllChrome;
@property bool invalidateColumnChrome;
@property bool invalidateKnobs;
@property bool invalidateRowChrome;
@property bool invalidateSelection;
@property bool invalidateTableName;
@property bool setNeedsDisplay;
@property bool syncReferenceHighlightState;
@property bool updateEditorRemainders;

- (id).cxx_construct;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })dirtyCellRange;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })dirtyStrokeRange;
- (bool)hideChromeContextMenuButton;
- (bool)hideStepperHUD;
- (bool)invalidateAllChrome;
- (bool)invalidateColumnChrome;
- (bool)invalidateKnobs;
- (bool)invalidateRowChrome;
- (bool)invalidateSelection;
- (bool)invalidateTableName;
- (void)setDirtyCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)setDirtyStrokeRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)setHideChromeContextMenuButton:(bool)arg1;
- (void)setHideStepperHUD:(bool)arg1;
- (void)setInvalidateAllChrome:(bool)arg1;
- (void)setInvalidateColumnChrome:(bool)arg1;
- (void)setInvalidateKnobs:(bool)arg1;
- (void)setInvalidateRowChrome:(bool)arg1;
- (void)setInvalidateSelection:(bool)arg1;
- (void)setInvalidateTableName:(bool)arg1;
- (bool)setNeedsDisplay;
- (void)setSetNeedsDisplay:(bool)arg1;
- (void)setSyncReferenceHighlightState:(bool)arg1;
- (void)setUpdateEditorRemainders:(bool)arg1;
- (bool)syncReferenceHighlightState;
- (bool)updateEditorRemainders;

@end
