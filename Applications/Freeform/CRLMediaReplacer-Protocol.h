//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CRLCanvasRep;
@protocol CRLMediaReplacingRep, CRLReplaceImageControllerPresenter;

@protocol CRLMediaReplacer <NSObject>
- (void)hideMediaReplacerWithCompletionBlock:(void (^)(void))arg1;
- (void)showMediaReplacerForMediaReplacingRep:(CRLCanvasRep<CRLMediaReplacingRep> *)arg1;

@optional
@property(readonly, nonatomic) _Bool isShowingUI;
@property(nonatomic) __weak id <CRLReplaceImageControllerPresenter> presenter;
@end

