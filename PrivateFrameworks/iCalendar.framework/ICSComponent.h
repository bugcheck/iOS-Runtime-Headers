/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@class ICSDate, ICSDuration, ICSStructuredLocation, ICSTrigger, ICSUserAddress, NSArray, NSMutableArray, NSMutableDictionary, NSString, NSURL;

@interface ICSComponent : NSObject <ICSWriting> {
    NSMutableArray *_components;
    NSMutableDictionary *_properties;
}

@property(retain) NSArray * attach;
@property(retain) NSArray * attendee;
@property int classification;
@property(retain) NSMutableArray * components;
@property(retain) NSArray * conferences;
@property(retain) ICSDate * created;
@property(retain) NSString * description;
@property(retain) ICSDate * dtend;
@property(retain) ICSDate * dtstamp;
@property(retain) ICSDate * dtstart;
@property(retain) ICSDuration * duration;
@property(retain) NSArray * exdate;
@property(retain) NSArray * exrule;
@property(readonly) bool isAllDay;
@property(retain) ICSDate * last_modified;
@property(retain) NSString * location;
@property(retain) ICSUserAddress * organizer;
@property unsigned long long priority;
@property(retain) NSArray * rdate;
@property(retain) ICSDate * recurrence_id;
@property(retain) NSArray * rrule;
@property unsigned long long sequence;
@property int status;
@property(retain) NSString * statusString;
@property(retain) NSString * summary;
@property(retain) ICSTrigger * trigger;
@property(retain) NSString * uid;
@property(retain) NSURL * url;
@property(retain) NSString * x_apple_dropbox;
@property(retain) NSString * x_apple_etag;
@property(retain) NSString * x_apple_ews_changekey;
@property(retain) NSString * x_apple_ews_itemid;
@property bool x_apple_ews_needsserverconfirmation;
@property(retain) NSString * x_apple_ews_permission;
@property bool x_apple_ignore_on_restore;
@property(retain) NSString * x_apple_scheduletag;
@property(retain) NSString * x_apple_serverFilename;
@property(retain) ICSStructuredLocation * x_apple_structured_location;
@property int x_calendarserver_access;

+ (id)inheritanceKeywords;
+ (id)makeUID;
+ (id)name;
+ (int)statusFromString:(id)arg1;
+ (id)stringFromStatus:(int)arg1;

- (void)ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (id)ICSStringWithOptions:(unsigned long long)arg1;
- (void)addComponent:(id)arg1;
- (void)addProperty:(id)arg1 withValue:(id)arg2;
- (id)allProperties;
- (id)attach;
- (id)attendee;
- (int)classification;
- (id)components;
- (id)conferences;
- (id)created;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)dtend;
- (id)dtstamp;
- (id)dtstart;
- (id)duration;
- (id)exdate;
- (id)exrule;
- (void)fixAlarms;
- (void)fixAttachments;
- (void)fixAttendees;
- (void)fixComponent;
- (void)fixExceptionDates;
- (void)fixExceptionRules;
- (void)fixPropertiesInheritance:(id)arg1;
- (void)fixRecurrenceDates;
- (void)fixRecurrenceRules;
- (bool)forcedAllDay;
- (bool)ignorePropertyWithName:(id)arg1;
- (id)init;
- (bool)isAllDay;
- (id)last_modified;
- (id)location;
- (id)organizer;
- (id)parametersToIncludeForChecksumVersion:(int)arg1;
- (id)parametersToObscure;
- (unsigned long long)priority;
- (id)properties;
- (id)propertiesForName:(id)arg1;
- (id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1;
- (id)propertiesToIncludeForChecksumVersion:(int)arg1;
- (id)propertiesToObscure;
- (id)rdate;
- (id)recurrence_id;
- (void)removeComponent:(id)arg1;
- (void)removePropertiesForName:(id)arg1;
- (id)rrule;
- (unsigned long long)sequence;
- (void)setAttach:(id)arg1;
- (void)setAttendee:(id)arg1;
- (void)setClassification:(int)arg1;
- (void)setComponents:(id)arg1;
- (void)setConferences:(id)arg1;
- (void)setCreated:(id)arg1;
- (void)setDescription:(id)arg1;
- (void)setDtend:(id)arg1;
- (void)setDtstamp:(id)arg1;
- (void)setDtstart:(id)arg1;
- (void)setDuration:(id)arg1;
- (void)setExdate:(id)arg1;
- (void)setExrule:(id)arg1;
- (void)setForcedAllDay:(bool)arg1;
- (void)setLast_modified:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setOrganizer:(id)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (void)setProperties:(id)arg1 forName:(id)arg2;
- (void)setProperty:(id)arg1 forName:(id)arg2;
- (void)setPropertyValue:(id)arg1 forName:(id)arg2;
- (void)setPropertyValue:(id)arg1 type:(int)arg2 forName:(id)arg3;
- (void)setRdate:(id)arg1;
- (void)setRecurrence_id:(id)arg1;
- (void)setRrule:(id)arg1;
- (void)setSequence:(unsigned long long)arg1;
- (void)setStatus:(int)arg1;
- (void)setStatusString:(id)arg1;
- (void)setSummary:(id)arg1;
- (void)setTrigger:(id)arg1;
- (void)setUid:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)setX_apple_dropbox:(id)arg1;
- (void)setX_apple_etag:(id)arg1;
- (void)setX_apple_ews_changekey:(id)arg1;
- (void)setX_apple_ews_itemid:(id)arg1;
- (void)setX_apple_ews_needsserverconfirmation:(bool)arg1;
- (void)setX_apple_ews_permission:(id)arg1;
- (void)setX_apple_ignore_on_restore:(bool)arg1;
- (void)setX_apple_scheduletag:(id)arg1;
- (void)setX_apple_serverFilename:(id)arg1;
- (void)setX_apple_structured_location:(id)arg1;
- (void)setX_apple_travel_advisory_behavior:(id)arg1;
- (void)setX_apple_travel_duration:(id)arg1;
- (void)setX_apple_travel_start:(id)arg1;
- (void)setX_calendarserver_access:(int)arg1;
- (bool)shouldObscureValue;
- (int)status;
- (id)statusString;
- (id)summary;
- (id)trigger;
- (id)uid;
- (id)url;
- (bool)validate:(id*)arg1;
- (id)x_apple_dropbox;
- (id)x_apple_etag;
- (id)x_apple_ews_changekey;
- (id)x_apple_ews_itemid;
- (bool)x_apple_ews_needsserverconfirmation;
- (id)x_apple_ews_permission;
- (bool)x_apple_ignore_on_restore;
- (id)x_apple_scheduletag;
- (id)x_apple_serverFilename;
- (id)x_apple_structured_location;
- (id)x_apple_travel_advisory_behavior;
- (id)x_apple_travel_duration;
- (id)x_apple_travel_start;
- (int)x_calendarserver_access;

@end
