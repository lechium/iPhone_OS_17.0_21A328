//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDirectoryEnumerator;
@protocol TITypologyPreferences;

@interface TYATypologyAccessSession : NSObject
{
    id <TITypologyPreferences> _typologyPreferences;	// 8 = 0x8
    NSDirectoryEnumerator *_directoryEnumerator;	// 16 = 0x10
    unsigned long long _accessMode;	// 24 = 0x18
    CDStruct_4c969caf _auditToken;	// 32 = 0x20
}

+ (id)_safeFilenameWithName:(id)arg1;	// IMP=0x0020000000001e4b
- (void).cxx_destruct;	// IMP=0x00200000000029d8
@property(nonatomic) unsigned long long accessMode; // @synthesize accessMode=_accessMode;
@property(retain, nonatomic) NSDirectoryEnumerator *directoryEnumerator; // @synthesize directoryEnumerator=_directoryEnumerator;
@property(retain, nonatomic) id <TITypologyPreferences> typologyPreferences; // @synthesize typologyPreferences=_typologyPreferences;
@property(nonatomic) CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
- (void)writeData:(id)arg1 toTypologyFileWithName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000025f4
- (void)setTypologyAccessMode:(unsigned long long)arg1;	// IMP=0x0010000000002546
- (void)removeTypologyFileWithName:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000022a5
- (void)nextTypologyURL:(CDUnknownBlockType)arg1;	// IMP=0x001000000000202e
- (void)startEnumeration;	// IMP=0x0010000000001dcf
- (id)_issueSandboxExtensionForURL:(id)arg1;	// IMP=0x0010000000001b77
- (void)_initializeEnumerator;	// IMP=0x00100000000017b0
- (id)initWithAuditToken:(CDStruct_4c969caf)arg1;	// IMP=0x00100000000016f2

@end

