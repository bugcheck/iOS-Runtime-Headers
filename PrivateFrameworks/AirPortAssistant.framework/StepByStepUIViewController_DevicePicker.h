/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class NSArray, NSDictionary, NSString, RecommendationActionController, UIPopoverController;

@interface StepByStepUIViewController_DevicePicker : StepByStepUIViewController <TableViewManagerDelegate> {
    UIPopoverController *_popover;
    NSDictionary *_selectedDevice;
    NSDictionary *_sourceBase;
    NSDictionary *_sourceNetwork;
    NSDictionary *_targetBase;
    RecommendationActionController *actionController;
    bool_showSingleBaseTopo;
    boolshowFullList;
    NSString *connectionMedium;
    NSArray *sortedDevices;
}

@property(retain) RecommendationActionController * actionController;
@property NSString * connectionMedium;
@property(retain) NSArray * sortedDevices;

- (id)actionController;
- (id)connectionMedium;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)pickerContent;
- (void)setActionController:(id)arg1;
- (void)setConnectionMedium:(id)arg1;
- (void)setSortedDevices:(id)arg1;
- (void)setupPickerTable;
- (bool)showMoreOptions;
- (id)sortedDevices;
- (void)touchInCellAtIndexPath:(id)arg1;
- (void)updateSelections;
- (id)valueForItemOfType:(id)arg1 atTypeIndex:(unsigned long long)arg2 inCellWithTag:(long long)arg3;
- (void)viewWillAppear:(bool)arg1;

@end
