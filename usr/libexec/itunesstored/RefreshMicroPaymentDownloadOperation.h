//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@interface RefreshMicroPaymentDownloadOperation : ISOperation
{
    long long _downloadID;	// 96 = 0x60
}

- (_Bool)_updateDownload:(id)arg1 withDictionary:(id)arg2;	// IMP=0x00200000001b5e82
- (_Bool)_refreshDownload:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001b56ee
- (id)_newRequestWithIdentity:(id)arg1 transactionID:(id)arg2;	// IMP=0x00100000001b5636
- (id)_newIdentityForPayment:(id)arg1;	// IMP=0x00100000001b546a
- (void)run;	// IMP=0x00100000001b505a
@property(readonly) long long downloadIdentifier;
- (id)initWithDownloadIdentifier:(long long)arg1;	// IMP=0x00100000001b5005

@end
