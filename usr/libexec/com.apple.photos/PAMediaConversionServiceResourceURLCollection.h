//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError, NSMutableDictionary, NSURL, PAMediaConversionServiceResourceURLCollectionAccessProvider;

@interface PAMediaConversionServiceResourceURLCollection : NSObject
{
    NSMutableDictionary *_urlReferencesByRole;	// 8 = 0x8
    PAMediaConversionServiceResourceURLCollectionAccessProvider *_accessProviderDelegate;	// 16 = 0x10
}

+ (id)filenameSummaryStringForDictionaryRepresentation:(id)arg1;	// IMP=0x00400000000093a5
+ (_Bool)getSignatureString:(id *)arg1 filenameSummary:(id *)arg2 forDictionaryRepresentation:(id)arg3;	// IMP=0x0010000000008fa9
+ (id)collectionForBookmarkDataDictionaryRepresentation:(id)arg1 accessProvider:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000008d59
+ (id)collectionWithMainResourceURL:(id)arg1;	// IMP=0x0010000000008d09
- (void).cxx_destruct;	// IMP=0x0010000000007e03
@property(retain) PAMediaConversionServiceResourceURLCollectionAccessProvider *accessProviderDelegate; // @synthesize accessProviderDelegate=_accessProviderDelegate;
@property(retain) NSMutableDictionary *urlReferencesByRole; // @synthesize urlReferencesByRole=_urlReferencesByRole;
- (_Bool)copyURL:(id)arg1 forRole:(id)arg2 toDirectory:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000007c35
- (id)urlForDebugDumpWithDirectoryName:(id)arg1 inExistingParentDirectory:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000076ff
@property(readonly) unsigned long long urlCount;
- (void)enumerateResourceURLs:(CDUnknownBlockType)arg1;	// IMP=0x001000000000765b
- (void)enumerateResourceURLReferences:(CDUnknownBlockType)arg1;	// IMP=0x0010000000007466
- (id)fileSizeSummary;	// IMP=0x0010000000007345
- (id)description;	// IMP=0x001000000000732e
- (id)logMessageSummary;	// IMP=0x001000000000731a
- (id)logMessageSummaryWithFullPath:(_Bool)arg1;	// IMP=0x00100000000071f6
@property(readonly) _Bool allURLsAreReadable;
- (_Bool)removeExistingEmptyFilesWithError:(id *)arg1;	// IMP=0x0010000000006f6b
- (_Bool)ensureFilesExistWithError:(id *)arg1;	// IMP=0x0010000000006dda
- (id)filenameExtensionAndPathHashForRole:(id)arg1;	// IMP=0x0010000000006ceb
- (id)bookmarkDataDictionaryRepresentationWithError:(id *)arg1;	// IMP=0x0010000000006b4b
- (id)typeIdentifierForResourceURLWithRole:(id)arg1;	// IMP=0x00100000000066b4
- (_Bool)containsAnyRole:(id)arg1;	// IMP=0x00100000000064af
- (_Bool)containsAllRoles:(id)arg1;	// IMP=0x00100000000062a6
- (void)setShouldDeleteURLOnDeallocation:(_Bool)arg1 forRole:(id)arg2;	// IMP=0x00100000000061c3
- (id)resourceURLForRole:(id)arg1;	// IMP=0x0010000000006050
- (void)setResourceURL:(id)arg1 forRole:(id)arg2 deleteOnDeallocation:(_Bool)arg3;	// IMP=0x0010000000005fea
- (void)setResourceURL:(id)arg1 forRole:(id)arg2;	// IMP=0x0010000000005dd9
- (unsigned long long)hash;	// IMP=0x0010000000005d3a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000005ce5
- (id)init;	// IMP=0x0010000000005c7f
@property(readonly) NSError *blastDoorError;
@property(readonly) NSURL *blastDoorSourceURL;
@property(readonly) NSDictionary *blastDoorVideoComplementProperties;
@property(readonly) NSDictionary *blastDoorMainSourceProperties;
@property(readonly) _Bool isBlastDoorAccessRequired;

@end

