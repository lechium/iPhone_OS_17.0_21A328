//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKSendMenuPopoverPresentationControllerAnchorItem, UIViewController;

__attribute__((visibility("hidden")))
@interface CKSendMenuPopoverPresentationConfiguration : NSObject
{
    CKSendMenuPopoverPresentationControllerAnchorItem *_anchorItem;	// 8 = 0x8
    UIViewController *_sendMenuViewController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000105404
@property(retain, nonatomic) UIViewController *sendMenuViewController; // @synthesize sendMenuViewController=_sendMenuViewController;
@property(retain, nonatomic) CKSendMenuPopoverPresentationControllerAnchorItem *anchorItem; // @synthesize anchorItem=_anchorItem;

@end

