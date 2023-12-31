//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIAlertController.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VUIAlertController : UIAlertController
{
    NSMutableArray *_alertActions;	// 8 = 0x8
}

+ (id)vui_alertControllerWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(long long)arg3;	// IMP=0x00600000002a12d5
- (void).cxx_destruct;	// IMP=0x00000000002a1854
@property(retain, nonatomic) NSMutableArray *alertActions; // @synthesize alertActions=_alertActions;
- (void)vui_dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002a1765
- (void)vui_presentAlertFromPresentingController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002a1546
- (void)vui_addAction:(id)arg1;	// IMP=0x00000000002a1532
- (void)vui_addAction:(id)arg1 isPreferred:(_Bool)arg2;	// IMP=0x00000000002a12e7

@end

