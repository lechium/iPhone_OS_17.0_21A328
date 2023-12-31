//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRFileObjectID, NSArray, NSURL;

__attribute__((visibility("hidden")))
@interface BRQueryStitch : NSObject
{
    NSArray *_contexts;	// 8 = 0x8
    BRFileObjectID *_objid;	// 16 = 0x10
    BOOL _kind;	// 24 = 0x18
    NSURL *_fromURL;	// 32 = 0x20
    NSURL *_url;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000079610
@property(retain, nonatomic) NSArray *contexts; // @synthesize contexts=_contexts;
@property(retain, nonatomic) NSURL *fromURL; // @synthesize fromURL=_fromURL;
- (void)dealloc;	// IMP=0x0000000000079592
- (void)done;	// IMP=0x00000000000794cd
- (void)_deletionDone;	// IMP=0x0000000000078d63
- (void)_renameDone;	// IMP=0x000000000007855a
- (void)_creationDone;	// IMP=0x0000000000078055
- (void)_enableUpdatesFromIPCAfterStitchingOnAllQueries;	// IMP=0x0000000000077f0e
- (void)setQueries:(id)arg1;	// IMP=0x0000000000077c77
- (id)description;	// IMP=0x0000000000077b9e
- (id)initWithURL:(id)arg1 objid:(id)arg2 kind:(BOOL)arg3;	// IMP=0x0000000000077afb

@end

