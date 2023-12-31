//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CSAudioStream, NSString;

@interface CSAudioTandemStream
{
    CSAudioStream *_primaryStream;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000760c7
@property(nonatomic) __weak CSAudioStream *primaryStream; // @synthesize primaryStream=_primaryStream;
- (_Bool)isStreaming;	// IMP=0x0010000000076056
- (void)stopAudioStreamWithOption:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007601a
- (void)startAudioStreamWithOption:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000075fde
- (void)prepareAudioStreamWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000075fa2
- (_Bool)prepareAudioStreamSyncWithRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000075f76
- (void)attachToPrimaryStreamWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000075dd4
- (id)initWithMasterAudioStream:(id)arg1 name:(id)arg2;	// IMP=0x0010000000075cb2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

