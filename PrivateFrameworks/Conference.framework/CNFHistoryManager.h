/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

@class NSMutableDictionary;



@interface CNFHistoryManager : NSObject 
{
    NSMutableDictionary *_history;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedManager;

- (id)init;
- (id)retain;
- (void)release;
- (void)dealloc;
- (NSUInteger)retainCount;
- (id)autorelease;
- (BOOL)havePreviouslyConferencedWithID:(id)arg1;
- (id)_normalizePhoneNumber:(id)arg1;
- (id)_fullPathToConferenceSupportDirectory;
- (id)_fullPathToConferenceHistoryPlist;
- (id)_readConferenceHistory;
- (void)_writeConferenceHistory:(id)arg1;
- (void)_reloadHistory;
- (void)setHavePreviouslyConferenced:(BOOL)arg1 withID:(id)arg2;

@end