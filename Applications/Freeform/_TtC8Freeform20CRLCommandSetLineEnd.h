//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLLineEnd, MISSING_TYPE, NSUUID;

@interface _TtC8Freeform20CRLCommandSetLineEnd
{
    MISSING_TYPE *id;	// 0 = 0x0
    MISSING_TYPE *lineEnd;	// 2 = 0x2
    MISSING_TYPE *chirality;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x004000000063a4d0
- (id)init;	// IMP=0x001000000063a430
- (id)initWithShapeItem:(id)arg1 lineEnd:(id)arg2 chirality:(long long)arg3;	// IMP=0x001000000063a130
- (id)initWithId:(id)arg1 lineEnd:(id)arg2 chirality:(long long)arg3;	// IMP=0x001000000063a0b0
@property(nonatomic, readonly) long long chirality; // @synthesize chirality;
@property(nonatomic, readonly) CRLLineEnd *lineEnd; // @synthesize lineEnd;
@property(nonatomic, readonly) NSUUID *id;

@end

