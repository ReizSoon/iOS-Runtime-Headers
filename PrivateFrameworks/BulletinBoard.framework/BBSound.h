/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class NSDictionary, NSString;

@interface BBSound : NSObject <NSCopying, NSCoding> {
    BOOL _repeats;
    NSString *_ringtoneName;
    unsigned int _soundBehavior;
    int _soundType;
    unsigned long _systemSoundID;
    NSDictionary *_vibrationPattern;
}

@property(getter=isRepeating) BOOL repeats;
@property(retain) NSString * ringtoneName;
@property unsigned int soundBehavior;
@property int soundType;
@property unsigned long systemSoundID;
@property(retain) NSDictionary * vibrationPattern;

+ (id)alertSoundWithSystemSoundID:(unsigned long)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRingtone:(id)arg1 vibrationPattern:(id)arg2 repeats:(BOOL)arg3;
- (id)initWithSystemSoundID:(unsigned long)arg1 behavior:(unsigned int)arg2;
- (BOOL)isRepeating;
- (id)ringtoneName;
- (void)setRepeats:(BOOL)arg1;
- (void)setRingtoneName:(id)arg1;
- (void)setSoundBehavior:(unsigned int)arg1;
- (void)setSoundType:(int)arg1;
- (void)setSystemSoundID:(unsigned long)arg1;
- (void)setVibrationPattern:(id)arg1;
- (unsigned int)soundBehavior;
- (int)soundType;
- (unsigned long)systemSoundID;
- (id)vibrationPattern;

@end