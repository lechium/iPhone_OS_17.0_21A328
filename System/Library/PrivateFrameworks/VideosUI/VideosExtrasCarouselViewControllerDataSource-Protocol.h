//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VideosExtrasCarouselViewController;
@protocol VideosExtrasCarouselCollectionViewCell;

@protocol VideosExtrasCarouselViewControllerDataSource
- (unsigned long long)carouselSize;
- (void)carouselViewController:(VideosExtrasCarouselViewController *)arg1 configureCarouselCollectionViewCell:(id <VideosExtrasCarouselCollectionViewCell>)arg2 forItemAtIndex:(unsigned long long)arg3 withThumbnailImageContainerSize:(struct CGSize)arg4;
- (unsigned long long)numberOfItemsInCarouselViewController:(VideosExtrasCarouselViewController *)arg1;
@end
