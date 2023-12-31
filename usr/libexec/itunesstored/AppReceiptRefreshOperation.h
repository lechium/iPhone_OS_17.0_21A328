//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class AppReceiptOperationResult, AppReceiptRefreshOperationOptions, NSArray;

@interface AppReceiptRefreshOperation : ISOperation
{
    NSArray *_familyAccountIDs;	// 96 = 0x60
    AppReceiptOperationResult *_operationResult;	// 104 = 0x68
    AppReceiptRefreshOperationOptions *_options;	// 112 = 0x70
    CDUnknownBlockType _resultsBlock;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x002000000011259a
- (_Bool)_refreshReceiptForApplication:(id)arg1 withOptions:(id)arg2 vppState:(long long)arg3 error:(id *)arg4;	// IMP=0x0010000000111e13
- (id)_postBodyDataWithApplication:(id)arg1 options:(id)arg2 vppState:(long long)arg3 error:(id *)arg4;	// IMP=0x00100000001110cd
- (id)_optionsWithVPPState:(long long)arg1;	// IMP=0x0010000000111008
- (_Bool)_preformMigrationCheckForApp:(id)arg1;	// IMP=0x0010000000111000
- (_Bool)_handleResponse:(id)arg1 forApp:(id)arg2 options:(id)arg3;	// IMP=0x001000000010ff2a
- (id)receiptExpirationDateForProxy:(id)arg1;	// IMP=0x001000000010fe95
- (void)setResultsBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000010fe1e
- (void)run;	// IMP=0x001000000010f629
- (id)initWithOptions:(id)arg1;	// IMP=0x001000000010f543

@end

