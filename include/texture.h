#ifndef OPENGL_TEXTURE_H
#define OPENGL_TEXTURE_H

namespace texture {
    unsigned int loadTexture(unsigned int textureUnit,
                             unsigned int textureTarget,
                             int width,
                             int height,
                             unsigned int channelType,
                             unsigned char *data);
}

#endif //OPENGL_TEXTURE_H
