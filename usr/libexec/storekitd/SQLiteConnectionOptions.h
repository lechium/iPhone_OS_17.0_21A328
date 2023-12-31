//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface SQLiteConnectionOptions : NSObject
{
    _Bool _readOnly;	// 8 = 0x8
    long long _cacheSize;	// 16 = 0x10
    NSString *_databasePath;	// 24 = 0x18
    NSString *_encryptionKeyId;	// 32 = 0x20
    NSString *_protectionType;	// 40 = 0x28
}

+ (id)inMemoryDatabaseSharedCacheFlag;	// IMP=0x00200000000860f4
+ (id)inMemoryDatabaseFlag;	// IMP=0x00100000000860e7
- (void).cxx_destruct;	// IMP=0x0020000000086212
@property(nonatomic, getter=isReadOnly) _Bool readOnly; // @synthesize readOnly=_readOnly;
@property(copy, nonatomic) NSString *protectionType; // @synthesize protectionType=_protectionType;
@property(copy, nonatomic) NSString *encryptionKeyId; // @synthesize encryptionKeyId=_encryptionKeyId;
@property(readonly) NSString *databasePath; // @synthesize databasePath=_databasePath;
@property(nonatomic) long long cacheSize; // @synthesize cacheSize=_cacheSize;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000086101
- (_Bool)isInMemoryDatabase;	// IMP=0x001000000008608e
- (void)setCacheSizeWithNumberOfKilobytes:(long long)arg1;	// IMP=0x0010000000086079
- (MISSING_TYPE *)setCacheSizeWithNumberOfDatabasePages: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000086067
- (id)initInMemoryDatabaseWithName:(id)arg1;	// IMP=0x0010000000085f89
- (id)initWithDatabasePath:(id)arg1;	// IMP=0x0010000000085efc

@end

