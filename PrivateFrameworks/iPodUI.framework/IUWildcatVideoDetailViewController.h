/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class UIImage, MPMediaItemImageRequest, UIAlertView, IUVideoTitleView, MPImageCache, MPMediaItem, NSSet, IUVideoPartListViewController, MPMediaDownloadObserver, IUWildcatVideoDetailView, IUiPodSegmentedViewController, <IUWildcatVideoDetailViewControllerDelegate>;

@interface IUWildcatVideoDetailViewController : IUiPodViewController <IUSegmentedViewControllerDelegate, IUWildcatVideoDetailViewDelegate, UIAlertViewDelegate, IUVideoPartListViewControllerDelegate> {
    <IUWildcatVideoDetailViewControllerDelegate> *_delegate;
    double _downloadProgress;
    BOOL _hasPushedPlayback;
    MPMediaDownloadObserver *_mediaDownloadObserver;
    MPImageCache *_posterImageCache;
    MPMediaItemImageRequest *_posterImageRequest;
    UIImage *_preloadedSnapshotImage;
    UIAlertView *_rentalAlertView;
    unsigned long long _representativeTrackPersistentUID;
    IUiPodSegmentedViewController *_segmentedViewController;
    MPImageCache *_snapshotImageCache;
    MPMediaItemImageRequest *_snapshotImageRequest;
    NSSet *_temporaryAnimationViews;
    UIImage *_temporarySnapshotImageForTransition;
    IUVideoPartListViewController *_videoPartListViewController;
    IUVideoTitleView *_videoTitleView;
}

@property(readonly) IUWildcatVideoDetailView * backstopView;
@property <IUWildcatVideoDetailViewControllerDelegate> * delegate;
@property(readonly) MPMediaItem * firstMediaItem;
@property(retain) UIImage * preloadedSnapshotImage;
@property unsigned long long representativeTrackPersistentUID;
@property(readonly) IUiPodSegmentedViewController * segmentedViewController;
@property(retain) IUVideoPartListViewController * videoPartListViewController;

+ (Class)backstopViewClass;

- (id)_aaEdgeViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_backButtonAction:(id)arg1;
- (void)_cancelImageRequest:(id*)arg1;
- (void)_cancelRentalAlertView:(BOOL)arg1;
- (void)_databaseContentsDidChangeNotification:(id)arg1;
- (void)_destroyRentalAlertView;
- (void)_destroyTemporaryAnimationViews;
- (float)_foldingTransitionHeightOfVerticalSection:(unsigned int)arg1;
- (void)_generatePreloadedSnapshotImageFromDefaultTrack;
- (BOOL)_isDownloadInProgress;
- (BOOL)_isFirstMediaItemMovie;
- (BOOL)_isMovie:(id)arg1;
- (void)_layoutUI;
- (id)_newPosterImageCacheRequest;
- (void)_notifyDelegateOfRepresentativeTrackPersistentUID;
- (void)_playMovie:(id)arg1;
- (struct CGSize { float x1; float x2; })_posterImageCacheRequestSize;
- (void)_reallyPlayMovie;
- (void)_removeDownloadObserver;
- (void)_rentalInfoChangedNotification:(id)arg1;
- (id)_representativeMediaItem;
- (void)_screensChanged:(id)arg1;
- (void)_setupDownloadObserver;
- (id)_transitionImageWithPosterAspectRatio;
- (void)_updateForDownloadProgress:(double)arg1 currentlyPlayable:(BOOL)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)alertViewCancel:(id)arg1;
- (id)backstopView;
- (id)copyArchivableContexts;
- (void)dealloc;
- (id)delegate;
- (void)didDeleteTrackWithPersistentUID:(unsigned long long)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (id)firstMediaItem;
- (void)flashItemForMediaItem:(id)arg1 atTime:(double)arg2;
- (id)foldingTransitionFaceWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 antiAliasedEdgeMask:(unsigned long)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })foldingTransitionFrontFaceFrame;
- (void)foldingTransitionViewDidTakeSnapshot;
- (void)foldingTransitionViewWillTakeSnapshot;
- (id)init;
- (void)loadView;
- (id)newSnapshotFaceViewWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 antiAliasedEdgeMask:(unsigned long)arg2;
- (void)playMovie;
- (id)preloadedSnapshotImage;
- (void)pushPlaybackContext;
- (void)reloadData;
- (unsigned long long)representativeTrackPersistentUID;
- (BOOL)restoreArchivedContexts:(id)arg1;
- (id)segmentedControlForSegmentedViewController:(id)arg1;
- (BOOL)segmentedViewController:(id)arg1 canSelectViewController:(id)arg2;
- (void)segmentedViewController:(id)arg1 willSelectViewController:(id)arg2;
- (id)segmentedViewController;
- (id)segmentedViewControllerIdentifiers;
- (id)segmentedViewControllerInitialSelectedIdentifier;
- (id)segmentedViewControllerSubViewControllers;
- (void)setDataSource:(id)arg1 query:(id)arg2 forEpisodeViewControllerContext:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setPreloadedSnapshotImage:(id)arg1;
- (void)setRepresentativeTrackPersistentUID:(unsigned long long)arg1;
- (void)setVideoPartListViewController:(id)arg1;
- (BOOL)shouldShowDividingLine;
- (BOOL)shouldShowReflection;
- (id)videoPartListViewController;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end