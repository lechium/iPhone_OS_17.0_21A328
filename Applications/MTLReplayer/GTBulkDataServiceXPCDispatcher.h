//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol GTBulkDataService;

@interface GTBulkDataServiceXPCDispatcher
{
    id <GTBulkDataService> _service;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000000b3c7
- (void)uploadChunk_forHandle_isFinalChunk_error_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000000b298
- (void)newUploadWithDescriptor_error_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000000b199
- (void)downloadData_usingTransferOptions_chunkHandler_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000000af3b
- (id)initWithService:(id)arg1 properties:(id)arg2;	// IMP=0x001000000000ae9b

@end

