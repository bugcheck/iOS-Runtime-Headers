/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, SAMPPodcast;

@interface SAMPPlayPodcastEpisodes : SADomainCommand {
}

@property(copy) NSString * episodePlaybackOrder;
@property(retain) SAMPPodcast * podcast;

+ (id)playPodcastEpisodes;
+ (id)playPodcastEpisodesWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)episodePlaybackOrder;
- (id)groupIdentifier;
- (id)podcast;
- (bool)requiresResponse;
- (void)setEpisodePlaybackOrder:(id)arg1;
- (void)setPodcast:(id)arg1;

@end
