/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIColor, CIVector, NSNumber;

@interface CIGaussianGradient : CIFilter {
    CIVector *inputCenter;
    CIColor *inputColor0;
    CIColor *inputColor1;
    NSNumber *inputRadius;
}

@property(retain) CIVector * inputCenter;
@property(retain) CIColor * inputColor0;
@property(retain) CIColor * inputColor1;
@property(retain) NSNumber * inputRadius;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputCenter;
- (id)inputColor0;
- (id)inputColor1;
- (id)inputRadius;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputCenter:(id)arg1;
- (void)setInputColor0:(id)arg1;
- (void)setInputColor1:(id)arg1;
- (void)setInputRadius:(id)arg1;

@end
