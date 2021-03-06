/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class <VKMapMatcherDelegate>, NSMutableArray, VKTileSource;

@interface VKMapMatcher : NSObject <GEOTileSourceClient> {
    NSMutableArray *_currentTiles;
    <VKMapMatcherDelegate> *_delegate;
    VKTileSource *_tileSource;
}

@property <VKMapMatcherDelegate> * delegate;

- (void)dealloc;
- (id)delegate;
- (id)initWithTileSource:(id)arg1;
- (id)matchLocation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)tileSource:(id)arg1 declinedToLoadTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2;
- (void)tileSource:(id)arg1 didFailToLoadTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 error:(id)arg3;
- (void)tileSource:(id)arg1 didFetchData:(id)arg2 forKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg3;
- (void)tileSourceDidFinishWithNetwork:(id)arg1;
- (void)tileSourceWillGoToNetwork:(id)arg1;
- (id)tilesAround:(struct { double x1; double x2; })arg1 radius:(double)arg2;

@end
