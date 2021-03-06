/* Generated by RuntimeBrowser
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/FontServices.framework/libhvf.dylib
 */

@interface HVFRenderer : NSObject {
    NSData * hvfb;
    struct unique_ptr<hvf::Renderer, std::__1::default_delete<hvf::Renderer> > { 
        struct __compressed_pair<hvf::Renderer *, std::__1::default_delete<hvf::Renderer> > { 
            struct Renderer {} *__value_; 
        } __ptr_; 
    }  renderer;
}

@property (nonatomic, retain) NSData *hvfb;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)countParts;
- (id)hvfb;
- (id)initWithLoader:(struct HVFLoaderImpl { int (**x1)(); }*)arg1;
- (id)initWithTableData:(id)arg1;
- (bool)renderPartAtIndex:(unsigned int)arg1 toContext:(id /* block */)arg2;
- (bool)renderPartAtIndex:(unsigned int)arg1 transform:(id)arg2 toContext:(id /* block */)arg3;
- (void)setHvfb:(id)arg1;

@end
