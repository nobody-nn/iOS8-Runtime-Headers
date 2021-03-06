/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class CoreDAVItemWithNoChildren, CoreDAVLeafItem, CalDAVCalendarServerChangesItem;

@interface CalDAVCalendarServerRecurrenceItem : CoreDAVItem  {
    CoreDAVItemWithNoChildren *_master;
    CoreDAVLeafItem *_recurrenceID;
    CalDAVCalendarServerChangesItem *_changes;
}

@property(retain) CoreDAVItemWithNoChildren * master;
@property(retain) CoreDAVLeafItem * recurrenceID;
@property(retain) CalDAVCalendarServerChangesItem * changes;
@property(readonly) bool isMaster;


- (id)recurrenceID;
- (id)master;
- (void)setChanges:(id)arg1;
- (void)setRecurrenceID:(id)arg1;
- (void)setMaster:(id)arg1;
- (id)changes;
- (id)copyParseRules;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (bool)isMaster;
- (id)init;
- (void)dealloc;
- (id)description;

@end
