//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSOperationQueue, SKUIGift, SKUIGiftConfiguration, SSVLoadURLOperation;

__attribute__((visibility("hidden")))
@interface SKUIGiftStepViewController : UIViewController
{
    SKUIGift *_gift;	// 8 = 0x8
    SKUIGiftConfiguration *_giftConfiguration;	// 16 = 0x10
    SSVLoadURLOperation *_loadOperation;	// 24 = 0x18
    NSOperationQueue *_operationQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000c14e4
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) SKUIGiftConfiguration *giftConfiguration; // @synthesize giftConfiguration=_giftConfiguration;
- (void)_finishImageLoadWithImage:(id)arg1 error:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c140e
- (void)loadItemArtworkWithArtworkContext:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c1062
@property(readonly, nonatomic) SKUIGift *gift; // @synthesize gift=_gift;
- (void)finishGiftingWithResult:(_Bool)arg1;	// IMP=0x00000000000c0f53
- (id)initWithGift:(id)arg1 configuration:(id)arg2;	// IMP=0x00000000000c0e5b

@end

