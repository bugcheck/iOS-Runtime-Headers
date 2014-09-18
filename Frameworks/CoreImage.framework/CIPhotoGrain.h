/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, NSNumber;

@interface CIPhotoGrain : CIFilter {
    NSNumber *inputAmount;
    NSNumber *inputISO;
    CIImage *inputImage;
    NSNumber *inputSeed;
}

@property(copy) NSNumber * inputAmount;
@property(copy) NSNumber * inputISO;
@property(retain) CIImage * inputImage;
@property(copy) NSNumber * inputSeed;

- (id)_grainBlendAndMixKernel;
- (id)_interpolateGrainKernel;
- (id)_paddedTileKernel;
- (id)customAttributes;
- (id)inputAmount;
- (id)inputISO;
- (id)inputImage;
- (id)inputSeed;
- (id)outputImage;
- (void)paramtersFor:(float)arg1 destination:(struct GrainParameters { float x1; float x2; float x3; float x4; }*)arg2 imageScaleFactor:(float)arg3;
- (void)setInputAmount:(id)arg1;
- (void)setInputISO:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputSeed:(id)arg1;

@end
