//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SFSharablePassword;

@interface SDAirDropHandlerCredentialLinks
{
    SFSharablePassword *_credential;	// 8 = 0x8
}

+ (void)openPasswordManagerURL:(id)arg1;	// IMP=0x00400000001047f9
- (void).cxx_destruct;	// IMP=0x00200000001051c9
- (_Bool)shouldEndAfterOpen;	// IMP=0x00100000001051c1
- (id)credential;	// IMP=0x0010000000104f2d
- (void)updatePossibleActions;	// IMP=0x0010000000104cae
- (long long)transferTypes;	// IMP=0x0010000000104c79
- (id)suitableContentsDescription;	// IMP=0x0010000000104836
- (void)handleAction;	// IMP=0x001000000010467d
- (_Bool)canHandleTransfer;	// IMP=0x001000000010445f

@end

