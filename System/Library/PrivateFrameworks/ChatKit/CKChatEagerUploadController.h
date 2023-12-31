//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKChatEagerUploadController : NSObject
{
    NSMutableDictionary *_identifierMap;	// 8 = 0x8
    NSMutableArray *_uploadUrls;	// 16 = 0x10
    NSMutableDictionary *_temporaryURLS;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000005dc572
@property(retain, nonatomic) NSMutableDictionary *temporaryURLS; // @synthesize temporaryURLS=_temporaryURLS;
@property(retain, nonatomic) NSMutableArray *uploadUrls; // @synthesize uploadUrls=_uploadUrls;
@property(retain, nonatomic) NSMutableDictionary *identifierMap; // @synthesize identifierMap=_identifierMap;
- (void)asyncCopyFileAtURL:(id)arg1 toDestinationURL:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000005dc29d
- (void)addURLToIdentifierMap:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x00000000005dc14f
- (void)_uploadFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3 videoComplementURL:(id)arg4 attributionInfo:(id)arg5 identifier:(id)arg6 recipients:(id)arg7;	// IMP=0x00000000005dba1b
- (void)uploadFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3 videoComplementURL:(id)arg4 attributionInfo:(id)arg5 identifier:(id)arg6 recipients:(id)arg7;	// IMP=0x00000000005db8da
- (void)uploadPayload:(id)arg1 identifier:(id)arg2 replace:(_Bool)arg3 recipients:(id)arg4;	// IMP=0x00000000005db70e
- (id)_newTransferForURL:(id)arg1 transcoderUserInfo:(id)arg2 attributionInfo:(id)arg3;	// IMP=0x00000000005db4ce
- (void)cancelURL:(id)arg1;	// IMP=0x00000000005db2e3
- (void)cancelIdentifier:(id)arg1;	// IMP=0x00000000005db1a8
- (void)cancelAll;	// IMP=0x00000000005db056
- (void)didSendComposition;	// IMP=0x00000000005db01b
- (void)removeTemporaryURLForURL:(id)arg1;	// IMP=0x00000000005daf63
- (id)init;	// IMP=0x00000000005daedc

@end

