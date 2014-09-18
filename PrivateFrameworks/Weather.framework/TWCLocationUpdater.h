/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CLGeocoder, City;

@interface TWCLocationUpdater : TWCUpdater {
    City *_currentCity;
    CLGeocoder *_geocoder;
    id _localWeatherHandler;
}

@property(retain) City * currentCity;

+ (void)clearSharedLocationUpdater;
+ (id)sharedLocationUpdater;

- (void)_failed:(unsigned long long)arg1;
- (id)aggregateDictionaryDomain;
- (void)cancel;
- (id)currentCity;
- (void)dealloc;
- (void)didProcessJSONObject;
- (void)enableProgressIndicator:(bool)arg1;
- (void)failCity:(id)arg1;
- (void)handleCompletionForCity:(id)arg1 withUpdateDetail:(unsigned long long)arg2;
- (void)handleNilCity;
- (id)init;
- (void)parsedResultCity:(id)arg1;
- (void)setCurrentCity:(id)arg1;
- (void)updateWeatherForLocation:(id)arg1 city:(id)arg2 withCompletionHandler:(id)arg3;
- (void)updateWeatherForLocation:(id)arg1 city:(id)arg2;

@end
