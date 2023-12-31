//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ShazamKit/SHEventSignalling-Protocol.h>
#import <ShazamKit/SHMatcherDelegate-Protocol.h>
#import <ShazamKit/SHMediaItemProvider-Protocol.h>
#import <ShazamKit/SHPreparableMatcher-Protocol.h>
#import <ShazamKit/SHRemoteMediaLibrary-Protocol.h>

@class NSString, SHMatcherRequest, SHMediaLibrarySnapshot;

@protocol SHShazamKitService <SHPreparableMatcher, SHMatcherDelegate, SHRemoteMediaLibrary, SHMediaItemProvider, SHEventSignalling>

@optional
- (void)synchronizeSnapshot:(SHMediaLibrarySnapshot *)arg1 startCondition:(NSString *)arg2 completionHandler:(void (^)(void))arg3;
- (void)startRecognitionForRequest:(SHMatcherRequest *)arg1 completionHandler:(void (^)(void))arg2;
@end

