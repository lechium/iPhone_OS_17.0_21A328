//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSArray, NSMutableArray, SSAccount;
@protocol RestoreDownloadItemsOperationDelegate;

@interface RestoreDownloadItemsOperation : ISOperation
{
    SSAccount *_account;	// 96 = 0x60
    NSArray *_downloadItems;	// 104 = 0x68
    NSMutableArray *_responses;	// 112 = 0x70
    _Bool _shouldShowTermsAndConditionsDialog;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00200000000f9f2a
- (void)_showDialogsForResponse:(id)arg1;	// IMP=0x00100000000f9c5a
- (_Bool)_runWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000f83b6
- (id)_runWithItems:(id)arg1 options:(id)arg2;	// IMP=0x00100000000f7a9f
- (id)_runWithBodyData:(id)arg1 contentEncoding:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000f7320
- (void)_run;	// IMP=0x00100000000f694d
- (id)_plistDataWithItems:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000f6606
- (id)_newResponseWithItems:(id)arg1 error:(id)arg2;	// IMP=0x00100000000f651f
- (void)_addResponse:(id)arg1;	// IMP=0x00100000000f643f
- (void)run;	// IMP=0x00100000000f63f2
@property _Bool shouldShowTermsAndConditionsDialog;
@property(readonly) NSArray *responses;
@property(readonly) NSArray *downloadItems;
@property(readonly) SSAccount *account;
- (id)initWithDownloadItems:(id)arg1 account:(id)arg2;	// IMP=0x00100000000f621b

// Remaining properties
@property __weak id <RestoreDownloadItemsOperationDelegate> delegate; // @dynamic delegate;

@end
