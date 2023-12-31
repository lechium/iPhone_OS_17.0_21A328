//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSString, SKUIRedeemViewControllerLegacy;

__attribute__((visibility("hidden")))
@interface SKUIRedeemIdRequiresValidationOperation : ISOperation
{
    CDUnknownBlockType _resultBlock;	// 96 = 0x60
    SKUIRedeemViewControllerLegacy *_redeemViewController;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000003689db
@property(nonatomic) __weak SKUIRedeemViewControllerLegacy *redeemViewController; // @synthesize redeemViewController=_redeemViewController;
@property(copy) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
- (void)_logResultsForSuccess:(_Bool)arg1 shouldVerify:(_Bool)arg2 failureReason:(id)arg3 error:(id)arg4;	// IMP=0x00000000003687ee
- (id)_subOperationWithBagKey:(id)arg1;	// IMP=0x00000000003686ec
- (id)_authenticationContext;	// IMP=0x0000000000368621
- (_Bool)_performAuthentication;	// IMP=0x00000000003683cc
- (void)operation:(id)arg1 selectedButton:(id)arg2;	// IMP=0x0000000000368363
- (void)main;	// IMP=0x000000000036800e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

