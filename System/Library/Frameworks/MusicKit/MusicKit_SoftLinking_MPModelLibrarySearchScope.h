//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPModelLibrarySearchScope;

__attribute__((visibility("hidden")))
@interface MusicKit_SoftLinking_MPModelLibrarySearchScope : NSObject
{
    MPModelLibrarySearchScope *_underlyingSearchScope;	// 8 = 0x8
    long long _modelObjectType;	// 16 = 0x10
}

+ (id)_topResultsRelationshipKeyForSpecificModelObjectType:(long long)arg1;	// IMP=0x0060000000002f75
+ (id)scopeForTopResultsWithSpecificModelObjectTypeScopes:(id)arg1;	// IMP=0x0060000000002a65
- (void).cxx_destruct;	// IMP=0x000000000000332c
@property(readonly, nonatomic) long long modelObjectType; // @synthesize modelObjectType=_modelObjectType;
- (long long)_modelObjectType;	// IMP=0x0000000000002f6b
- (id)_underlyingSearchScope;	// IMP=0x0000000000002f5d
- (id)initWithModelObjectType:(long long)arg1;	// IMP=0x00000000000028f3
- (id)_initWithUnderlyingSearchScope:(id)arg1 modelObjectType:(long long)arg2;	// IMP=0x000000000000287c

@end

