//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GDSQLGraphObjectRetriever, _PASSqliteDatabase;
@protocol GDViewAccessAssertion;

@interface GDVisualIdentifierView : NSObject
{
    id <GDViewAccessAssertion> _accessAssertion;	// 8 = 0x8
    _PASSqliteDatabase *_db;	// 16 = 0x10
    GDSQLGraphObjectRetriever *_personRetriever;	// 24 = 0x18
    GDSQLGraphObjectRetriever *_locationRetriever;	// 32 = 0x20
    GDSQLGraphObjectRetriever *_softwareRetriever;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000452d85
- (void)enumeratePeopleMatchingName:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000045287c
- (void)enumeratePeopleWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000004527b6
- (id)personForIdentifier:(id)arg1;	// IMP=0x0000000000452590
- (void)linkEntitiesForPerson:(id)arg1;	// IMP=0x0000000000451f54
- (id)initWithAccessAssertion:(id)arg1 database:(id)arg2;	// IMP=0x0000000000451d40

@end

