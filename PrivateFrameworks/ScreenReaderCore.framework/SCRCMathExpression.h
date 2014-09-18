/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@class NSArray, NSString, SCRCMathExpression;

@interface SCRCMathExpression : NSObject {
    unsigned long long _cachedMaximumDepth;
    SCRCMathExpression *_parent;
}

@property(readonly) bool beginsWithSpace;
@property(readonly) bool canBeUsedWithBase;
@property(readonly) bool canBeUsedWithRange;
@property(readonly) bool canBeWrappedInLatexMathIndicators;
@property(readonly) NSArray * children;
@property(readonly) bool endsWithSpace;
@property(readonly) unsigned long long fractionLevel;
@property(readonly) bool hasSimpleArrayOfChildren;
@property(readonly) long long integerValue;
@property(readonly) bool isBaseSubSuperscript;
@property(readonly) bool isEllipsis;
@property(readonly) bool isFenceDelimiter;
@property(readonly) bool isFunctionName;
@property(readonly) bool isInteger;
@property(readonly) bool isMultiRowTable;
@property(readonly) bool isNaturalSuperscript;
@property(readonly) bool isNumber;
@property(readonly) bool isOperationSymbol;
@property(readonly) bool isRangeSubSuperscript;
@property(readonly) bool isSimpleNumericalFraction;
@property(readonly) bool isTermSeparator;
@property(readonly) bool isUnlinedFraction;
@property(readonly) bool isWordOrAbbreviation;
@property(readonly) NSString * latexFormatStringAsOver;
@property(readonly) NSString * latexFormatStringAsUnder;
@property SCRCMathExpression * parent;
@property(readonly) NSArray * siblings;
@property(readonly) NSArray * subExpressions;

+ (Class)_classForExpressionType:(id)arg1;
+ (id)mathExpressionWithDictionary:(id)arg1;
+ (void)setPathToSegmentOrderingPlist:(id)arg1;

- (void)_applyTreePositionOfOriginalSegment:(id)arg1 toPrefixedOrSuffixedSegment:(id)arg2;
- (id)_scrcBundle;
- (id)arrayWithoutNilsFromFirstChild:(id)arg1 secondChild:(id)arg2 thirdChild:(id)arg3;
- (bool)beginsWithSpace;
- (bool)canBeUsedWithBase;
- (bool)canBeUsedWithRange;
- (bool)canBeWrappedInLatexMathIndicators;
- (bool)canFormWordStartingWithExpression:(id)arg1;
- (id)children;
- (id)dollarCodeDescription;
- (id)dollarCodeDescriptionAsBinomialCoefficientWithTreePosition:(id)arg1 numberOfOuterRadicals:(unsigned long long)arg2;
- (id)dollarCodeDescriptionAsMixedNumberFractionWithTreePosition:(id)arg1;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2 openOperator:(id)arg3 openOperatorTreePosition:(id)arg4 closeOperator:(id)arg5 closeOperatorTreePosition:(id)arg6;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;
- (bool)endsWithSpace;
- (id)fenceDelimiters;
- (unsigned long long)fractionLevel;
- (bool)hasSimpleArrayOfChildren;
- (id)initWithDictionary:(id)arg1;
- (long long)integerValue;
- (bool)isBaseSubSuperscript;
- (bool)isEllipsis;
- (bool)isFenceDelimiter;
- (bool)isFunctionName;
- (bool)isInteger;
- (bool)isMultiRowTable;
- (bool)isNaturalSuperscript;
- (bool)isNumber;
- (bool)isOperationSymbol;
- (bool)isRangeSubSuperscript;
- (bool)isSimpleNumericalFraction;
- (bool)isTermSeparator;
- (bool)isUnlinedFraction;
- (bool)isWordOrAbbreviation;
- (id)latexDescription;
- (id)latexDescriptionForChildrenJoinedByString:(id)arg1;
- (id)latexDescriptionInMathMode:(bool)arg1;
- (id)latexFormatStringAsOver;
- (id)latexFormatStringAsUnder;
- (id)latexIdentifierForFenceOperator:(id)arg1 isClosingOperator:(bool)arg2;
- (id)latexIdentifierForIdentifier:(id)arg1;
- (id)latexMathModeDescription;
- (id)localizedAttributedStringForKey:(id)arg1 treePosition:(id)arg2;
- (id)localizedAttributedStringForKey:(id)arg1;
- (id)localizedSegmentOrderingForKey:(id)arg1;
- (id)localizedStringForKey:(id)arg1;
- (id)localizedStringForNumber:(id)arg1;
- (id)mathMLString;
- (unsigned long long)maximumDepth;
- (unsigned long long)maximumFractionLevelOfSubExpressions;
- (unsigned long long)numberOfTables;
- (id)parent;
- (void)setParent:(id)arg1;
- (id)siblings;
- (id)speakableDescription;
- (id)speakableDescriptionAsBinomialCoefficientWithSpeakingStyle:(int)arg1;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(bool)arg2 isPartOfWord:(bool)arg3;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(bool)arg2;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1;
- (id)speakableSegments:(id)arg1 withLocalizablePrefix:(id)arg2 localizableSuffix:(id)arg3;
- (id)speakableSegments:(id)arg1 withPrefix:(id)arg2 suffix:(id)arg3;
- (id)speakableSegmentsAsBinomialCoefficientWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;
- (id)speakableSegmentsUpToDepth:(unsigned long long)arg1;
- (id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3 localizablePrefix:(id)arg4 localizableSuffix:(id)arg5;
- (id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3 prefix:(id)arg4 suffix:(id)arg5;
- (id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;
- (id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2;
- (id)speakableSummary;
- (id)subExpressions;

@end
