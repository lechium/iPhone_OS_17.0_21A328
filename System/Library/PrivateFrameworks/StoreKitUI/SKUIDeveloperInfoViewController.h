//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIViewController.h"

@class SKUIDeveloperInfo, SKUIDeveloperInfoView, UIScrollView;

__attribute__((visibility("hidden")))
@interface SKUIDeveloperInfoViewController : SKUIViewController
{
    SKUIDeveloperInfo *_developerInfo;	// 8 = 0x8
    SKUIDeveloperInfoView *_infoView;	// 16 = 0x10
    UIScrollView *_scrollView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001b8db9
@property(readonly, nonatomic) SKUIDeveloperInfo *developerInfo; // @synthesize developerInfo=_developerInfo;
- (void)loadView;	// IMP=0x00000000001b8a10
- (id)initWithDeveloperInfo:(id)arg1;	// IMP=0x00000000001b8953

@end

