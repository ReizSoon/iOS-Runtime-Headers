/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVFrameRateRangeInternal;

@interface AVFrameRateRange : NSObject  {
    AVFrameRateRangeInternal *_internal;
}

@property(readonly) double minFrameRate;
@property(readonly) double maxFrameRate;
@property(readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } maxFrameDuration;
@property(readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } minFrameDuration;

+ (id)frameRateRangeWithMinRate:(int)arg1 maxFrameRate:(int)arg2;

- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithMinFrameRate:(int)arg1 maxFrameRate:(int)arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxFrameDuration;
- (double)maxFrameRate;
- (double)minFrameRate;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minFrameDuration;

@end