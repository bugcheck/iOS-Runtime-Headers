/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSArray, NSMutableArray;

@interface MKOrientationContext : NSObject {
    NSMutableArray *orientViews;
    struct UIView { Class x1; id x2; id x3; id x4; id x5; float x6; long long x7; id x8; id x9; unsigned long long x10; struct { unsigned int x_11_1_1 : 1; unsigned int x_11_1_2 : 1; unsigned int x_11_1_3 : 1; unsigned int x_11_1_4 : 1; unsigned int x_11_1_5 : 1; unsigned int x_11_1_6 : 1; unsigned int x_11_1_7 : 1; unsigned int x_11_1_8 : 1; unsigned int x_11_1_9 : 1; unsigned int x_11_1_10 : 1; unsigned int x_11_1_11 : 1; unsigned int x_11_1_12 : 1; unsigned int x_11_1_13 : 1; unsigned int x_11_1_14 : 1; unsigned int x_11_1_15 : 1; unsigned int x_11_1_16 : 1; unsigned int x_11_1_17 : 6; unsigned int x_11_1_18 : 1; unsigned int x_11_1_19 : 1; unsigned int x_11_1_20 : 1; unsigned int x_11_1_21 : 1; unsigned int x_11_1_22 : 1; unsigned int x_11_1_23 : 1; unsigned int x_11_1_24 : 1; unsigned int x_11_1_25 : 1; unsigned int x_11_1_26 : 1; unsigned int x_11_1_27 : 1; unsigned int x_11_1_28 : 1; unsigned int x_11_1_29 : 1; unsigned int x_11_1_30 : 1; unsigned int x_11_1_31 : 1; unsigned int x_11_1_32 : 1; unsigned int x_11_1_33 : 1; unsigned int x_11_1_34 : 1; unsigned int x_11_1_35 : 1; unsigned int x_11_1_36 : 1; unsigned int x_11_1_37 : 1; unsigned int x_11_1_38 : 1; unsigned int x_11_1_39 : 1; unsigned int x_11_1_40 : 1; unsigned int x_11_1_41 : 1; unsigned int x_11_1_42 : 1; unsigned int x_11_1_43 : 1; unsigned int x_11_1_44 : 1; unsigned int x_11_1_45 : 1; unsigned int x_11_1_46 : 1; unsigned int x_11_1_47 : 1; unsigned int x_11_1_48 : 1; unsigned int x_11_1_49 : 1; unsigned int x_11_1_50 : 1; unsigned int x_11_1_51 : 1; unsigned int x_11_1_52 : 1; unsigned int x_11_1_53 : 1; unsigned int x_11_1_54 : 1; unsigned int x_11_1_55 : 1; unsigned int x_11_1_56 : 1; unsigned int x_11_1_57 : 1; unsigned int x_11_1_58 : 1; unsigned int x_11_1_59 : 1; unsigned int x_11_1_60 : 1; unsigned int x_11_1_61 : 1; unsigned int x_11_1_62 : 1; unsigned int x_11_1_63 : 1; unsigned int x_11_1_64 : 5; unsigned int x_11_1_65 : 1; unsigned int x_11_1_66 : 1; unsigned int x_11_1_67 : 1; unsigned int x_11_1_68 : 2; unsigned int x_11_1_69 : 2; unsigned int x_11_1_70 : 1; unsigned int x_11_1_71 : 2; unsigned int x_11_1_72 : 1; unsigned int x_11_1_73 : 3; unsigned int x_11_1_74 : 1; unsigned int x_11_1_75 : 1; unsigned int x_11_1_76 : 1; unsigned int x_11_1_77 : 1; unsigned int x_11_1_78 : 1; unsigned int x_11_1_79 : 1; unsigned int x_11_1_80 : 1; unsigned int x_11_1_81 : 1; } x11; } *projectionView;
    struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } *relativeViewFrames;
    NSArray *relativeViews;
}

- (void).cxx_destruct;
- (void)_computeRelativeViewFrame:(id)arg1;
- (void)_computeRelativeViewFrames;
- (void)dealloc;
- (id)initWithViewsToOrient:(id)arg1 relativeViews:(id)arg2 projectionView:(struct UIView { Class x1; id x2; id x3; id x4; id x5; float x6; long long x7; id x8; id x9; unsigned long long x10; struct { unsigned int x_11_1_1 : 1; unsigned int x_11_1_2 : 1; unsigned int x_11_1_3 : 1; unsigned int x_11_1_4 : 1; unsigned int x_11_1_5 : 1; unsigned int x_11_1_6 : 1; unsigned int x_11_1_7 : 1; unsigned int x_11_1_8 : 1; unsigned int x_11_1_9 : 1; unsigned int x_11_1_10 : 1; unsigned int x_11_1_11 : 1; unsigned int x_11_1_12 : 1; unsigned int x_11_1_13 : 1; unsigned int x_11_1_14 : 1; unsigned int x_11_1_15 : 1; unsigned int x_11_1_16 : 1; unsigned int x_11_1_17 : 6; unsigned int x_11_1_18 : 1; unsigned int x_11_1_19 : 1; unsigned int x_11_1_20 : 1; unsigned int x_11_1_21 : 1; unsigned int x_11_1_22 : 1; unsigned int x_11_1_23 : 1; unsigned int x_11_1_24 : 1; unsigned int x_11_1_25 : 1; unsigned int x_11_1_26 : 1; unsigned int x_11_1_27 : 1; unsigned int x_11_1_28 : 1; unsigned int x_11_1_29 : 1; unsigned int x_11_1_30 : 1; unsigned int x_11_1_31 : 1; unsigned int x_11_1_32 : 1; unsigned int x_11_1_33 : 1; unsigned int x_11_1_34 : 1; unsigned int x_11_1_35 : 1; unsigned int x_11_1_36 : 1; unsigned int x_11_1_37 : 1; unsigned int x_11_1_38 : 1; unsigned int x_11_1_39 : 1; unsigned int x_11_1_40 : 1; unsigned int x_11_1_41 : 1; unsigned int x_11_1_42 : 1; unsigned int x_11_1_43 : 1; unsigned int x_11_1_44 : 1; unsigned int x_11_1_45 : 1; unsigned int x_11_1_46 : 1; unsigned int x_11_1_47 : 1; unsigned int x_11_1_48 : 1; unsigned int x_11_1_49 : 1; unsigned int x_11_1_50 : 1; unsigned int x_11_1_51 : 1; unsigned int x_11_1_52 : 1; unsigned int x_11_1_53 : 1; unsigned int x_11_1_54 : 1; unsigned int x_11_1_55 : 1; unsigned int x_11_1_56 : 1; unsigned int x_11_1_57 : 1; unsigned int x_11_1_58 : 1; unsigned int x_11_1_59 : 1; unsigned int x_11_1_60 : 1; unsigned int x_11_1_61 : 1; unsigned int x_11_1_62 : 1; unsigned int x_11_1_63 : 1; unsigned int x_11_1_64 : 5; unsigned int x_11_1_65 : 1; unsigned int x_11_1_66 : 1; unsigned int x_11_1_67 : 1; unsigned int x_11_1_68 : 2; unsigned int x_11_1_69 : 2; unsigned int x_11_1_70 : 1; unsigned int x_11_1_71 : 2; unsigned int x_11_1_72 : 1; unsigned int x_11_1_73 : 3; unsigned int x_11_1_74 : 1; unsigned int x_11_1_75 : 1; unsigned int x_11_1_76 : 1; unsigned int x_11_1_77 : 1; unsigned int x_11_1_78 : 1; unsigned int x_11_1_79 : 1; unsigned int x_11_1_80 : 1; unsigned int x_11_1_81 : 1; } x11; }*)arg3;
- (void)invalidateView:(id)arg1;

@end
