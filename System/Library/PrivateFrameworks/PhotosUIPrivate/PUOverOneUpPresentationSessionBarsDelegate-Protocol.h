//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class NSDictionary, NSString, PUOverOneUpPresentationSession, UIBarButtonItem;

@protocol PUOverOneUpPresentationSessionBarsDelegate <NSObject>

@optional
- (void)overOneUpPresentationSession:(PUOverOneUpPresentationSession *)arg1 didAppendReviewScreenAction:(unsigned long long)arg2;
- (UIBarButtonItem *)overOneUpPresentationSession:(PUOverOneUpPresentationSession *)arg1 barButtonItemForActivityType:(NSString *)arg2;
- (void)overOneUpPresentationSession:(PUOverOneUpPresentationSession *)arg1 didCompleteWithActivityType:(NSString *)arg2 assetsByAssetCollection:(NSDictionary *)arg3 success:(_Bool)arg4;
@end

