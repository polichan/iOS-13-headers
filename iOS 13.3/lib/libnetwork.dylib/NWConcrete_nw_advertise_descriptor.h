/* Generated by RuntimeBrowser
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS.simruntime/Contents/Resources/RuntimeRoot/usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_advertise_descriptor : NSObject <OS_nw_advertise_descriptor> {
    unsigned int  __pad_bits;
    char * domain;
    char * name;
    unsigned int  no_auto_rename;
    NSObject<OS_nw_txt_record> * txt_record;
    char * type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithName:(const char *)arg1 type:(const char *)arg2 domain:(const char *)arg3;

@end
