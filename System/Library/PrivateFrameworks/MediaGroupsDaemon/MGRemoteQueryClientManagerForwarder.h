//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaGroupsDaemon/NSURLSessionTaskDelegate-Protocol.h>

@class MGRemoteQueryClientManager, NSString;

__attribute__((visibility("hidden")))
@interface MGRemoteQueryClientManagerForwarder : NSObject <NSURLSessionTaskDelegate>
{
    MGRemoteQueryClientManager *_manager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000012acd
@property(readonly, nonatomic) __weak MGRemoteQueryClientManager *manager; // @synthesize manager=_manager;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0000000000012a22
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x000000000001297b
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000128c3
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001281e
- (id)initWithClientManager:(id)arg1;	// IMP=0x00000000000127ba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

