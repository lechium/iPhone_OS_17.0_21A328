//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MSMessagesAppViewController, NSString;

__attribute__((visibility("hidden")))
@interface _MSMessagesAppPresentationControllerDelegate : NSObject
{
    MSMessagesAppViewController *_appViewController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000fc86
@property(nonatomic) __weak MSMessagesAppViewController *appViewController; // @synthesize appViewController=_appViewController;
- (void)sheetPresentationControllerDidChangeSelectedDetentIdentifier:(id)arg1;	// IMP=0x000000000000fb3d
- (id)initWithMessagesAppViewController:(id)arg1;	// IMP=0x000000000000fad9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
