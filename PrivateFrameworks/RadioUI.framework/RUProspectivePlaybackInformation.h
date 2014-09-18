/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class RadioStation;

@interface RUProspectivePlaybackInformation : MPUProspectivePlaybackInformation {
    RadioStation *_radioStation;
}

@property(readonly) RadioStation * radioStation;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithRadioStation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isRadioProspectivePlaybackInformation;
- (id)radioStation;

@end
